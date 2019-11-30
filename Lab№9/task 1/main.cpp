#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int x [], int lenght)
{
    for (int i = 0; i < lenght; ++i)
    {
        cout<<"["<< i<<"] = "<< x[i]<<"; ";
    }
    cout<<endl;
}

void printSecondElement(int x [], int lenght)
{
    printArray(x, lenght);
    sort(x, x + lenght);
    printArray(x, lenght);
    cout<<endl<<"Второе число по вел-не: "<<x[lenght - 2];
}

int main()
{
    int lenghtOfArray;
    cout<<"Введите длину массива";
    cin>>lenghtOfArray;
    int array[lenghtOfArray];

    for(int i = 0; i < lenghtOfArray; i++)
    {
        array[i] = rand() % 100;
    }
    printSecondElement(array, lenghtOfArray);

}