#include <iostream>
using namespace std;
int main() {
    string userString, add;
    char charUser;
    cout<<"Введите любую строку ";
    cin>>userString;
    cout<<"Введите строку, которую надо вставлять ";
    cin>>add;
    cout<<"Введите символ после которого втсавлять строку ";
    cin>>charUser;


    for(int i = 0; i < userString.length(); i++){
        if(userString[i] == charUser)
        {
            userString.insert(i + 1, add);
            i += add.length();
        }
    }

    cout<<userString;

    return 0;
}