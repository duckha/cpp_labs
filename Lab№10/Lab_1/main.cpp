#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, randInt, lineInt, min = 100, max = 0;
    string line;
    ofstream fileOfStream;
    ifstream fileIfStream;

    fileOfStream.open("/home/ivan/Desktop/Лабораторные работы/Бартасевич/Лабораторная работа №10/Lab_1/forFirstLab.txt");

    if (fileOfStream.is_open()){

        cout<<"Файл открылся" << endl << "Введите n: ";
        cin >> n;

        for (int i = 0; i < n; ++i) {
            fileOfStream << rand() % 100 << endl;
        }

        fileIfStream.open("/home/ivan/Desktop/Лабораторные работы/Бартасевич/Лабораторная работа №10/Lab_1/forFirstLab.txt");

        while (getline(fileIfStream, line)){
            lineInt = atoi(line.c_str());
            if (lineInt > max) max = lineInt;
            if (lineInt < min) min = lineInt;
        }

        fileIfStream.close();

        fileOfStream << "Min is: " << min << endl;
        fileOfStream << "Max is: " << max;

        fileOfStream.close();

    }else{
        cout<<"Файла не существует";
    }
    return 0;
}