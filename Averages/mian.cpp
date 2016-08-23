#include <iostream>

int main()
{
	int varA = 0, varB = 0, varC = 0, varD = 0, varE = 0;
	printf("input five variables \n");
	scanf_s("%d %d %d %d %d", &varA, &varB, &varC, &varD, &varE);
	getchar();
	
	std::cout << (varA + varB + varC + varD + varE) / 5;
	system("pause");
}