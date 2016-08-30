#include <iostream>

struct Player
{
	char Name[80];
	int Health;
	int Score;
	int Position[2];
	int Velocity;
};
struct PlayerShip
{
	int position[8] = { 0,0,2,2,3,3,4,4 };
	int color[3] = { 178,255,102 };
};
void main()
{
	Player Phillip;
	printf("Give your Character a Name and a Score \n");
	scanf_s("%s %d", Phillip.Name, 80, &Phillip.Score);
	getchar();
	printf("%s %d \n", Phillip.Name, Phillip.Score);
	system("Pause");
}