//============================================================================
// Name        : 3.cpp
// Author      : Ivan_Egorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {
	float a, b, x, help;
	printf("Введите a = ");
	scanf("%f", &a);
	printf("Введите b = ");
	scanf("%f", &b);
	if ((a > 0 && b < 0) || (a < 0 && b > 0)){
		help = -(a/b);
		x = sqrt(help);
		printf("x1 = 0; x2 = %f", x);
	}else{
	printf("x1 = 0; x2 = Корня нет");
	}
	return 0;
}
