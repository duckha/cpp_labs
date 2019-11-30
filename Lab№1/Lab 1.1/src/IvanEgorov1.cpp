
#include <iostream>
using namespace std;

int main()
{
	float y, answer;
	printf("Vvedite y = ");
	scanf("%f", &y);
	answer = ((3 * y - 2 * (y*y)) / (4 * (y*y) - 12 * y + 9));
	printf("Otvet = %10.2f", answer);
	return 0;
}
