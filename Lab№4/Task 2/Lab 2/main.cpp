#include <iostream>
using namespace std;

int main() {
    float a, p = 1;
    int n;
    cout<<"Введите действительное число: ";
    cin>>a;
    cout<<"Введите натуральное число: ";
    cin>>n;
    for (int i = 0; i <= n; i++) {
        p *= (a - (i*n));
    }
    cout<<p;
    return 0;
}