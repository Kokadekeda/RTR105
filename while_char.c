#include <stdio.h>

// gcc while_char.c -o while_char.out
// ./while_char.out

int main(void)
{
	char i = 1;
	
	while(1)
	{
		printf("i = %d\n", i++);
	}
	
	return 0;
}
