//============================================================================
// Name        : Lab_Three.cpp
// Author      : Ivan_Egorov
// Version     :
// Copyright   : Your copyright notice
// Description : C++
//============================================================================

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
	float cosa, c, square, a, b, angleA;
	printf("Vvedite bolshuyu storonu = ");
	scanf("%f", &a);
	printf("Vvedite menschuyu storonu = ");
	scanf("%f", &b);
	printf("Vvedite ugol pri bolschem osnovanii = ");
	scanf("%f", &angleA);
	c = (a - b)/(2 * cos(a));
	square = ((a + b) / 2) * sqrt((c*c) - (((a - b))*(a - b)) / 4);
	printf("%10.2f", square);

	return 0;
}
