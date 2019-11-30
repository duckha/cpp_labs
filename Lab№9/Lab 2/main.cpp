#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void addFraction(int temporaryNumenator, int temporaryDenominator, int *numerator, int *denominator)
{
    *numerator = (((*numerator) * temporaryDenominator) + ((*denominator) * temporaryNumenator));
    *denominator *= temporaryDenominator;
}

int main()
{
    int temporaryNumenator, temporaryDenominator, n;
    int numerator = 1, denominator = 1;
    int compressNumenator, compressDenominator, gcd;
    cout << "Write n - steps: ";
    cin >> n;
    cout<<1<<". "<<numerator << "/" << denominator<<endl;
    for (int i = 2; i <= n; i++)
    {
        temporaryNumenator = pow(-1, i + 1);
        temporaryDenominator = i;
        addFraction(temporaryNumenator, temporaryDenominator, &numerator, &denominator);
        cout<<i<<". "<<numerator << "/" << denominator<<endl;
    }
    gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
    cout << "Fraction is: ";
    cout << numerator << "/" << denominator;

    return 0;
}