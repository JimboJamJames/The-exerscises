#include<iostream>
int main()
{
	int array1[10], smallest = 0, largest = 0;
	printf("give me ten numbers \n");
	for (int i = 0; i < 10; ++i)
	{
		scanf_s("%d", &array1[i]);

		if (i == 0)
		{ 
			smallest = largest = array1[i];
		}
		if (array1[i] > largest)
			largest = array1[i];

		if (array1[i] < smallest)
			smallest = array1[i];
	}
		printf("largest: %d smallest: %d \n", largest, smallest);
	getchar();
	system("pause");
}