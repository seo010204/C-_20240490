#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main()
{
	int number[SIZE];
	int most;
	int temp;
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		number[i] = (rand() % 10000) + 1;
	}
	for (int i = 0; i < SIZE - 1; i++)
	{

	}

	return 0;
}