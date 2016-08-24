#include <iostream>
int main()
{
	for (int value = 0; value <= 100; ++value)
	{
		if (value % 3 == 0 && value % 5 != 0)
		{
			printf("Fizz ", value);
			continue;
		}
		if (value % 5 == 0 && value % 3 != 0)
		{
			printf("Buzz ", value);
			continue;
		}
		if (value % 3 == 0 && value % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		printf("%d ", value);
	}
	system("pause");
}