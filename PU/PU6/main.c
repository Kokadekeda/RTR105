#include <stdio.h>
#include "mod.h"

// Kristaps Peteris Ansons
// 201RMC060

int main()
{
	SayHello();
	
	printf("\n");
	
	PrintThisChar('Q');
	
	printf("\n");
	
	int one = One();
	
	printf("\n");
	
	int summ = AddUp(3, 4);
	printf("%d", summ);
	
	return 0;
}
