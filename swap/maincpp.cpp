
#include <iostream>

int main()
{
	int varA = 0, varB = 0, varC = 0;
	printf("insert two integers \n");
	scanf_s("%d %d", &varA, &varB);
	getchar();
	printf("A: %d, B: %d \n", varA, varB);

	varC = varA;

	varA = varB;
	varB = varC;

	printf("Swap successful! (well, probably)\n");
	printf("A: %d, B: %d \n", varA, varB);
	getchar();
	
}