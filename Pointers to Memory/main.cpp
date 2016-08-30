#include <iostream>
void main()
{
	int var = -74789078905897;
	float far = var;
	printf("%f\n", far);
	far = *(float*)&var;
	printf("%f\n", far);
	getchar();
	system("pause");
}