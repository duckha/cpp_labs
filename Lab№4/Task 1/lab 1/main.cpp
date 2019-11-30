#include <iostream>

using namespace std;
bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    for (int x = 0; x <= 15; x++)
    {
        int answer = x * x + x + 17;
        if (isPrime(answer))
        {
            cout << answer << '\n';
        }
    }
    return 0;
}

