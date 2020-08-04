#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main()
{
	int i,H=0,T=0;
	srand((unsigned int)time(NULL));
		
	printf("Tossing a coin....\n");

	for(i=0;i<3;i++)
	{
		printf("Round%d: ",i+1);
	
	if(rand() % 2 == 1)
		{
			printf("Heads\n");
			H++;
		}
		else
		{
			printf("Tails\n");
			T++;
		}
	}

	printf("Heads: %d, Tails: %d\n",H,T);

	return 0;
}