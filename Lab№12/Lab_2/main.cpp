#include <iostream>
#include <list>

using namespace std;

class SetInteger{
private:
    int power;
    list<int> set;
public:
    SetInteger(int power)
    {
      this->power = power;
      for (int i = 0; i < power; ++i) {
          set.resize(i, rand() % 100);
      }
    }

    int getCurrentPower(){
      return set.size();
    }
    void addElement(int x){
        set.push_back(x);
    }
    void printElements(){
      for (int n : set) {
          cout << n << endl;
      }
    }
    void deleteElement(int x){
      set.remove(x);
    }

    bool isPresent(int x){
      for (int n : set) {
          if (n == x){
            return true;
          }
      }
      return false;
    }

    void comparison(int x){
        for(int numOfSet : set){
            if(numOfSet > x) cout<<numOfSet<<" > "<<x<<endl;
            if(numOfSet < x) cout<<numOfSet<<" < "<<x<<endl;
            if(numOfSet == x) cout<<numOfSet<<" = "<<x<<endl;
        }
    }


};
int main(){
    int power, choose, element;
    bool forWhile = true;
    cout << "Введите мощность вашего множества";
    cin >> power;
    SetInteger set = SetInteger(power);
    while(forWhile){
        cout << endl
        << "1. Get current power of set." << endl
        << "2. Add element." << endl
        << "3. Print elements." << endl
        << "4. Delete element." << endl
        << "5. Is present?" << endl
        << "6. Comparing." << endl
        << "For exit - write other number." << endl;
        cin >> choose;
        switch (choose){
            case 1:
                cout << set.getCurrentPower() + 1 << endl;
                break;
            case 2:
                cout << "Enter the element for add: ";
                cin >> element;
                set.addElement(element);
                cout << element << " has been added."  << endl;
                break;
            case 3:
                set.printElements();
                break;
            case 4:
                cout << "Enter the element for remove: ";
                cin >> element;
                set.deleteElement(element);
                cout << element << " has been removed."  << endl;
                break;
            case 5:
                cout << "Enter the element for remove: ";
                cin >> element;
                cout << set.isPresent(element) << endl;
                break;
            case 6:
                cout << "Enter the element: ";
                cin >> element;
                set.comparison(element);
                break;
            default:
                forWhile = false;
                break;
        }
    }
    return 0;
}
