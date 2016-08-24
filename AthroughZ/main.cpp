#include <cstdio>
#include <iostream>

void main ()
{
	
	char userInputA;
	scanf_s(" %c", &userInputA, 1);
	
	char userInputB;
	scanf_s(" %c", &userInputB, 2);

	
	//printf("%c", userInputA);
	printf("%d\n", userInputA);
	printf("%d\n", userInputB);
	

	printf("%d\n",(userInputB + userInputA) / 2);

	userInputA = (userInputA - 65) % 32 + 65;
	userInputB = (userInputB - 65) % 32 + 65;


	char responseA = (userInputB + userInputA) / 2;

	printf("\n%c", responseA);
	
	

	getchar();
	getchar();
}