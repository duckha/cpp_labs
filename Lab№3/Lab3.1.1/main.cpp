#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, h, s;
    int chooseOfUser;
     cout<<"1 - катет, 2 - гиппотенуза, 3 - высота, 4 - площадь";
     cin>>chooseOfUser;
     switch(chooseOfUser)
     {
     case 1:
    	 cout<<"Введите катет = ";
    	 cin>>a;
    	 b = sqrt((a*a) + (a*a));
    	 h = b / 2;
    	 s = (a * a) / 2;
    	 break;
     case 2:
    	 cout<<"Введиет гипотенузу = ";
    	 cin>>b;
    	 h = b / 2;
    	 a = sqrt(h*h + h*h);
    	 s = (b * h) / 2;
     	 break;
     case  3:
    	 cout<<"Введите высоту = ";
    	 cin>>h;
    	 b = h*2;
    	 a = sqrt((pow(h,2) + pow(h,2)));
    	 s = (b * h) / 2;
    	 break;
     case 4:
         cout<<"Введите площадь = ";
         cin>>s;
         b = sqrt(4 * s);
         h = b / 2;
         a = sqrt((pow(h,2) + pow(h,2)));
         break;
     default: cout<<"Такой функции нету";
     }
     cout<<"Катет = "<<a<<"; Гипотенуза = "<<b<<"; Высота = "<<h<<"; площадь = "<<s;
     
     
	return 0;
}