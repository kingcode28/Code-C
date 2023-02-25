#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10

void random(int array[]);

int main()
{
	int array[length];
	random(array);
}

void random(int array[])
{
	int i;
	srand(time(NULL));
	for(i=0; i<length; i++)
	{
		array[i]= 1+rand()%10;
		printf("%5d", array[i]);
	}
}

