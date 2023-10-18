#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// gcc while_rand.c -o while_rand.out
// ./while_rand.out

int main(void)
{
	char i = 1;
	int flag = 1;
	int counter = 0;
	int seed = time(NULL); // laiks sekundes, kops 01.01.1970. 00:00:00.0000
	srand(seed);
	
	while(flag)
	{
		//printf("i = %d\n", i++);
		counter++;
		flag = rand();
	}
	
	printf("counter = %d (pec cikla)\n", counter);
	
	return 0;
}
