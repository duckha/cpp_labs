#include <iostream>
#include <math.h>
using namespace std;
int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    float a = 0;
    int n;
    cout<<"Введите n: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        a += pow(2, i) * factorial(i) / pow(i,i);
    }
    printf("%10.3f", a);
    return 0;
}