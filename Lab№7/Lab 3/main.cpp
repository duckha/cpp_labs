#include <iostream>
using namespace std;
int main() {
    string A, B;
    cout << "Введите A";
    getline(cin, A);
    cout << "Введите B";
    getline(cin, B);
    int count = 0;
    for (int i = 0; i < B.length(); i++) {
        for (int j = 0; j < A.length(); j++) {
            if (B[i] == A[j]){
                count += 1;
                break;
            }
        }
    }
    if (count == B.length()){
        cout<<"Сходится";
    }else{
        cout<<"Не сходятся";
    }
    return 0;
}