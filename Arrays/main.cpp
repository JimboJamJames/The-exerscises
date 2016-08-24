#include <iostream>
int main()
{
	int numbers[5];
	printf("give me five numbers \n");

	for (int value = 0; value < 5; ++value)
	{
		scanf_s("%d", &numbers[value]);
	}

	//scanf_s("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);
	getchar();

	for (int value = 4; value > -1; --value)
	{
		printf("%d", numbers[value]);
		printf("\n");
	}

	//printf("\n %d %d %d %d %d\n", numbers[4], numbers[3], numbers[2], numbers[1], numbers[0]);
	system("pause");
}