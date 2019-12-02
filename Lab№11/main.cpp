
#include <iostream>
#include "5.1.cpp"
#include "8.1.cpp"
#include "9.1.cpp"
using namespace std;
int main(){
    int chooseUser;
    cout<<"Введите нужную лабу"<<endl<<"1 - 5.1"<<endl<<"2 - 8.1"<<endl<<"3 - 9.1"<<endl;
    cin >> chooseUser;
    switch (chooseUser){
        case 1:
            lab5::main();
            break;
        case 2:
            lab8::main();
            break;
        case 3:
            lab9::main();
            break;
        default:
            cout <<"Такой работы нету";
            break;
    }
    return 0;
}
