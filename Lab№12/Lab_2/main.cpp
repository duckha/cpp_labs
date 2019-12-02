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

  }

};
int main(){
    int count, power;
    cout << "Введите мощность вашего множества";
    cin >> power;
    SetInteger set = SetInteger(power);

    return 0;
}