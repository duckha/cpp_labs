
#include <iostream>
using namespace std;

int main() {
	float x, y, m, n;
	printf("Введите x = ");
	scanf("%f", &x);
	printf("Введите y = ");
	scanf("%f", &y);
	printf("Введите m = ");
	scanf("%f", &m);
	printf("Введите n = ");
	scanf("%f", &n);

	if(x > m && x < n){
		printf("Точка входит в область");
	}else{
		printf("Точка не входит в обасть");
	}

	return 0;
}
