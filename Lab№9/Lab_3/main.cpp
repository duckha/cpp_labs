#include <iostream>
#include <algorithm>
using namespace std;
int reverseInt(int n)
{
    int m = 0;
    while(n > 0){
        m = m*10 + n%10;
        n /= 10;
    }
    return m;
}
int main()
{
    int num;
    cout << "Введите число, которое надо перевернуть" <<endl;
    cin >> num;
    cout<<reverseInt(num);
    return 0;
}