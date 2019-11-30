#include <iostream>
using namespace std;
struct timely
{
    int hour;
    int minute;
    int seconds;
};
void printLately(timely t1, timely t2)
{
    string t1Later = "Время 1 позже, чем время 2";
    string t2Later = "Время 2 позже, чем время 1";
    if (t1.hour == t2.hour)
    {
        if (t1.minute == t1.minute)
        {
            if (t1.seconds == t2.seconds)
            {
                cout<<"Время одинаковое";
            }
        }
    }
    else
    {
        if (t1.hour > t2.hour)
        {
            cout<<t1Later;
        }
        else if (t2.hour > t1.hour)
        {
            cout<<t2Later;
        }

        else if (t1.minute > t2.minute)
        {
            cout<<t1Later;
        }
        else if (t2.minute > t1.minute)
        {
            cout<<t2Later;
        }

        else if (t1.seconds > t2.seconds)
        {
            cout<<t1Later;
        }
        else if (t2.seconds > t1.seconds)
        {
            cout<<t2Later;
        }
    }

}
int main()
{
    int h1, m1, s1;
    int h2, m2, s2;
    cout<<"Введите первое время (час, минуты, секунды)";
    cin>>h1; cin>>m1; cin>>s1;
    timely time1 = {h1, m1, s1};

    cin>>h2; cin>>m2; cin>>s2;
    timely time2 = {h2, m2, s2};

    printLately(time1, time2);

    return 0;
}