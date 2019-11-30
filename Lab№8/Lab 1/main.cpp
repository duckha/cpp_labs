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
int main()
{
    student s1, s2, s3, s4, s5;
    s1 = {"Eleseev", 5, 5, 5, "9B"};
    s2 = {"Borisov", 3, 5, 4, "9A"};
    s3 = {"Parallelev", 4, 4, 4, "9A"};
    s4 = {"Meheev", 2, 4, 4, "9C"};
    s5 = {"Bela", 3, 5, 5, "9D"};

    isPrintable(s1);
    isPrintable(s2);
    isPrintable(s3);
    isPrintable(s4);
    isPrintable(s5);

    return 0;
}