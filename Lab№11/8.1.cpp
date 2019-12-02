#include <iostream>
using namespace std;
struct student
{
   string surname;
    int markMath;
    int markEng;
    int markPE;
    string classNum;
    int midMark = (markMath + markEng +markPE) / 3;
};
void isPrintable(student student)
{
    if (student.markPE > 3 & student.markEng > 3 & student.markMath > 3)
    {
        cout<<"Фамилия: "<<student.surname<<"; Средняя оценка: "<<student.midMark<<"; Класс: "<<student.classNum<<endl;
    }
}
namespace lab8{
    int main() {
        student s[5];
        s[0] = {"Eleseev", 5, 5, 5, "9B"};
        s[1] = {"Borisov", 3, 5, 4, "9A"};
        s[2] = {"Parallelev", 4, 4, 4, "9A"};
        s[3] = {"Meheev", 2, 4, 4, "9C"};
        s[4] = {"Bela", 3, 5, 5, "9D"};

        for (int i = 0; i < 5; ++i) {
            isPrintable(s[i]);
        }

        return 0;
    }
}