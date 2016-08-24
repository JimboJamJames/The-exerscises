
int main()
{
int varA = 0, varB = 0, varD = 0;
char varC;
printf("Write a number and add it to another number\n");

scanf_s("%d %c %d", &varA, &varC, 1, &varB);

switch (varC)
{
case '+':
varD = varA + varB;
break;
case '-':
varD = varA - varB;
break;
case '*':
varD = varA * varB;
break;
case '/':
varD = varA / varB;
break;
case '%':
varD = varA % varB;
break;
default: std::cout << "Error";
break;
}
printf("%d\n", varD);

system("pause");
}