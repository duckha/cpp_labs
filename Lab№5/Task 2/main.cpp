#include <iostream>
const int size = 20;
using namespace std;

int main() {
    int matrix[size][size];
    int indexOfMinus;


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 2001 - 1000;
        }
    }
    for (int l = 0; l <size; ++l) {
        for (int i = 0; i < size; ++i) {
            cout<<matrix[l][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"По строкам: "<<endl;
    for (int k = 0; k < size; ++k) {
        indexOfMinus = 0;
        for (int i = 0; i < size; ++i) {
            if (matrix[k][i] < 0){indexOfMinus = i;}
        }
        cout<<indexOfMinus<<endl;
    }

    cout<<"По столбцам: "<<endl;
    for (int k = 0; k < size; ++k) {
        indexOfMinus = 0;
        for (int i = 0; i < size; ++i) {
            if (matrix[i][k] < 0){indexOfMinus = i;}
        }
        cout<<indexOfMinus<<endl;
    }


    return 0;
}