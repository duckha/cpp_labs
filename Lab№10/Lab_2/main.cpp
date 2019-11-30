#include <iostream>
#define MAX_DATES 10
using namespace std;
struct str
{
    int date;
    int month;
    int year;
} dat[MAX_DATES];


int main()
{
    FILE *read;
    int n,i,minYear;
    i=0;
    read=fopen("/home/ivan/Desktop/Лабораторные работы/Бартасевич/Лабораторная работа №10/Lab_2/dates" ,"rt");
    while(!feof(read))
    {
        fscanf(read,"%d.%d.%d", &dat[i].date, &dat[i].month, &dat[i].year);
        i++;
    }

    fclose(read);
    n = i++;  

    minYear=dat[0].year;
    for(i = 1;i < n; i++)
    {
        if(dat[i].year < minYear)
            minYear = dat[i].year;
    }

    printf("Min year = %d", minYear);

    return 0;
}
