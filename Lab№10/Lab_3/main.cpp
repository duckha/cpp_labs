#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int countOfCorrect = 0, numOfString = 1;
    ifstream fileIfStream;
    string line;
    fileIfStream.open("/home/ivan/Desktop/Лабораторные работы/Бартасевич/Лабораторная работа №10/Lab_3/text");
    while (getline(fileIfStream, line)) {
        for (char c : line) {
            if (c == '('){
                countOfCorrect++;
            }
            if (c == ')') {
                if (countOfCorrect == 0) {
                    countOfCorrect = -100;
                    break;
                } else {
                    countOfCorrect--;
                }
            }
        }
        if (countOfCorrect != 0) cout << "Ошибка в написании скобок в строчке №"<< numOfString<<endl;
        numOfString++;
        countOfCorrect = 0;
    }
        return 0;
}