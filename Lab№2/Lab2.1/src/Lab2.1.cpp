//============================================================================
// Name        : 1.cpp
// Author      : Ivan_Egorov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	float x, sum;
	scanf("%f", &x);
	if (x <= 2){
		sum = (x*x) + 4*x + 5;
	}else{
		sum = ((1) / ((x*x) + 4*x + 5));
	printf("%f", sum);
	return 0;
	}
}
