#include "Header.h"

void main()
{
	Dinosaur originalDino = createDinosaur();
	printDinosaur(originalDino);
	modifyDinosaur(originalDino);
	printDinosaur(originalDino);
	system("Pause");
}