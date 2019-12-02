#include <iostream>
const int size = 20;
using namespace std;
namespace lab5{
    int main() {
        int array[size];
        int countOfMinus = 0;
        int sum = 1;

        for (int i = 0; i < size; i++) {
            array[i] = rand() % 2001 - 1000;
            if (array[i] < 0) {
                countOfMinus += 1;
                sum *= array[i];
            }
            cout << "[" << i << "]" << " = " << array[i] << endl;
        }
        cout << countOfMinus << endl;
        cout << sum << endl;

        return 0;
    }
}