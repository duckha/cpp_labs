#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

class SetInteger{
private:
    int power, number;
    vector<int> set;
    void sortSet(){
        sort(set.rbegin(), set.rend());
        reverse(set.rbegin(), set.rend());
    }
public:
    SetInteger(int power)
    {
      this->power = power;
      for (int i = 0; i < power; ++i) {
          number = rand() % 5;
          while (true){
              if (isPresent(number)){
                  number++;
              } else break;
          }
          set.resize(i, number);
      }
      sortSet();
    }

    bool isPresent(int x){
        for (int n : set) {
            if (n == x){
                return true;
            }
        }
        return false;
    }

    int getCurrentPower(){
      return set.size();
    }
    void addElement(int x){
        if (!isPresent(x)) set.push_back(x);
        sortSet();
    }
    void printElements(){
      for (int n : set) {
          cout << n << "; ";
      }
    }
    void deleteElement(int x){
      set.erase(set.begin() + x);
    }

    bool comparison(SetInteger setSecond){
        if (set.size() != setSecond.set.size()) return false;
        for (int i = 0; i < set.size(); ++i) {
            if (set[i] != setSecond.set[i]) return false;
        }
        return true;
    }

    bool isPresent(SetInteger setSecond){
        bool isIn;
        for (int i = 0; i < set.size(); ++i) {
            isIn = false;
            for (int j = 0; j < setSecond.set.size(); ++j) {
                if (set[i] == setSecond.set[j]) isIn = true;
            }
            if (!isIn) return false;
        }
        return true;
    }
};

int getIndex(vector<SetInteger> sets){
    int index;
    cout << "Indexs of sets";
    for (int i = 0; i < sets.size(); ++i) {
        cout << " " << i;
    }
    cout << endl << "Choose set: ";
    cin >> index;
    return index;
}

int main(){
    vector<SetInteger>sets;
    int power, choose, element, index, indexSecond;
    bool forWhile = true, result;
    while(forWhile){
        cout << endl
        << "0. Create set" << endl
        << "1. Get current power of set." << endl
        << "2. Add element." << endl
        << "3. Print elements." << endl
        << "4. Delete element." << endl
        << "5. Is present?" << endl
        << "6. Comparing sets." << endl
        << "7. Is set presents set?" << endl
        << "8. Print all sets." << endl
        << "For exit - write other number." << endl;
        cin >> choose;
        switch (choose){
            case 0:
                cout << "Enter power of your set";
                cin >> power;
                sets.emplace_back(power);
                break;
            case 1:
                index = getIndex(sets);
                cout << sets[index].getCurrentPower() + 1 << endl;
                break;
            case 2:
                index = getIndex(sets);
                cout << "Enter the element for add: ";
                cin >> element;
                sets[index].addElement(element);
                cout << element << " has been added."  << endl;
                break;
            case 3:
                index = getIndex(sets);
                sets[index].printElements();
                break;
            case 4:
                index = getIndex(sets);
                cout << "Enter the element for remove: ";
                cin >> element;
                sets[index].deleteElement(element);
                cout << element << " has been removed."  << endl;
                break;
            case 5:
                index = getIndex(sets);
                cout << "Enter the element for check present: ";
                cin >> element;
                cout << sets[index].isPresent(element) << endl;
                break;
            case 6:
                index = getIndex(sets);
                indexSecond = getIndex(sets);
                result = sets[index].comparison(sets[indexSecond]);
                cout << endl << result;
                break;
            case 7:
                index = getIndex(sets);
                indexSecond = getIndex(sets);
                result = sets[index].isPresent(sets[indexSecond]);
                cout << endl << result;
                break;
            case 8:
                for (int i = 0; i < sets.size(); ++i) {
                    cout << i << ". ";
                    sets[i].printElements();
                    cout << endl;
                }
                break;
            default:
                forWhile = false;
                break;
        }
    }
    return 0;
}
