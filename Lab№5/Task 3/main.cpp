#include <iostream>
const int size = 5;
using namespace std;

    int main()
    {
        int matrix[size][size];
        int index = 0;
    //creating matrix
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                matrix[i][j] = rand() % 18 - 9;
            }
        }
    //print matrix
        for (int l = 0; l < size;l++)
        {
            for (int i = 0; i < size;i++)
            {
                cout << matrix[l][i] << " ";
            }
            cout << endl;
        }
    //Finding first unnull columns (works correctly)
        for (int k = 0; k < size; k++)
        {
            int nullCounts = 0;
            for (int i = 0; i < size; i++)
            {
                if (matrix[i][k] != 0)
                {
                    nullCounts += 1;
                }
            }
            if(nullCounts == size)
            {
                index = k;
                break;
            }
        }
    //Replace column
        for (int m = index; m < size - 1; m++)
        {
            for (int i = 0; i < size; i++)
            {
                matrix[i][m] = matrix[i][m + 1];
            }
        }
        cout << endl;
    //Print matrix without annull column
        for (int l = 0; l < size; l++)
        {
            for (int i = 0; i < size - 1; i++)
            {
                cout << matrix[l][i] << " ";
            }
            cout << endl;
        }
        return 0;
    }
