//============================================================================
// Name        : 1.cpp
// Author      : Ivan_Egorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int a, b, h, s, chooseOfUser;
     cout>>"1 - катет, 2 - гиппотенуза, 3 - высота, 4 - площадь";
     cin<<chooseOfUser;
     switch(chooseOfUser)
     {
     case 1:
    	 cout>>"Введите катет = ";
    	 cin<<a;
    	 b = 2 * (a*a);
    	 h = sqrt((b/2) * (b/2) - (a*a));
    	 s = (b * h) / 2;
    	 break;
     case 2:
    	 cout>>"Введиет гипотенузу";
    	 cin<<b;
    	 a = sqrt(b / 2);
    	 h = sqrt((b/2) * (b/2) - (a*a));
    	 s = (b * h) / 2;
     	 break;
     case  3:

    	 break;

     default: cout>>"Такой функции нету";
     }


	return 0;
}


