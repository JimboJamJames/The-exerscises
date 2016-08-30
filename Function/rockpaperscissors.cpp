#include <iostream>
#include <time.h>
int randRange()
{
	srand(time(0));
	return rand() % 3 + 1;
	system("pause");
}

// solveBattle // given two choices, figure out who won
// getCompInput // decides what the computer decides
// getUserInput // prompt the user for a choice and return it
int getUserInput()
{
	int varA = 1;

	printf("pick a number: 1, 2 or 3 \n");
	printf("Rock: 1 , Paper: 2 or Scissors: 3? \n");
	scanf_s("%d", &varA);
	return varA;
}


int main()
{
	// user selection
	int varA = getUserInput();
	if (varA == 1)
	{
		printf("Rock \n");
	}
	if (varA == 2)
	{
		printf("Paper \n");
	}
	if (varA == 3);
	{
		printf("Scissors \n");
	}

	// comp selection
	int b = randRange();

	// test battle
	if (varA == b)
	{
		printf("No victor");
	}
	else
	{
		printf("You Win \n");
	}
	system("pause");
}
