#include <iostream>
#include <cmath>
int main()
{
	int varA = 0, varB = 0;
	int total;
	printf("give me a base value and an exponent \n");
	scanf_s("%d %d", &varA, &varB);
	total = pow(varA, varB);
	printf("%d \n", total);
		system("pause");
}
