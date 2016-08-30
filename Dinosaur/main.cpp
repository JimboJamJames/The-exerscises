#include <iostream>

struct Dinosaur
{
	char Name[200];
	char Type[200];
	int Velocity;
};

Dinosaur createDinosaur()
{
	Dinosaur dino;
	printf("Create a name for your dino, give it a type \n and tell me how fast it can run\n");
	scanf_s("%s %s %d", dino.Name, 200, dino.Type, 200, &dino.Velocity);
	getchar();
	printf("%s %s %d \n", dino.Name, dino.Type, dino.Velocity);

	return dino;
}

void printDinosaur(Dinosaur theDino)
{
	// any changes to theDino will NOT affect the original dino
	printf("%s %s %d \n", theDino.Name, theDino.Type, theDino.Velocity);
}

void modifyDinosaur(Dinosaur &theDino)
{
	// any changes to theDino will affect the original dino
	theDino.Velocity = 2;
}


void main()
{
	Dinosaur originalDino = createDinosaur();
	printDinosaur(originalDino);
	modifyDinosaur(originalDino);
	printDinosaur(originalDino);
	system("Pause");
}