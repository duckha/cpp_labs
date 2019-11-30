//============================================================================
// Name        : Lab_Two.cpp
// Author      : Ivan_Egorov
// Version     :
// Copyright   : Your copyright notice
// Description : C++
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x, answer;
	printf("Enter x = ");
	scanf("%f", &x);
	answer = log((5 - x) / (3 * x - 5));
	printf ("%f", answer);
			return 0;
}
