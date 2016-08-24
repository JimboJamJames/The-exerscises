int main()
//Excersise 2
{
int varA = 0, varB = 0;
printf("this program will print the largest of two numbers to the screen. \n");
printf("insert two integers seperated by a space and press enter: ");
scanf_s("%d %d", &varA, &varB);
getchar();

if (varA < varB)
{
int tswap = varA;
varA = varB;
varB = tswap;
}

printf("%d >= %d", varA, varB);
getchar();
}
