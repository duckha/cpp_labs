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
    void printElemens(){
      for (int n : set) {
          cout << n << endl;
      }
    }
    void deleteElement(int x){
      set.remove(x);
    }

    boolean isPresent(int x){
      for (int n : set) {
          if (n == x){
            return true;
          }
      }
      return false;
    }
/*  LAST METHOD
    void comparison(int x){
        if ()
    }
*/

};
int main(){
    int count, power;
    cout << "Введите мощность вашего множества";
    cin >> power;
    SetInteger set = SetInteger(power);

    return 0;
}
