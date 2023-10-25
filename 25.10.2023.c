#include <stdio.h>
#include <string.h>

// gcc 25.10.2023.c -o 25.10.2023.out
// ./25.10.2023.out

int main()
{
	// ================================================================================
	// Pointers - 2
	// ================================================================================
	
	int b = 5;
	int *pb = &b;
	
	printf("adreses veertiiba pirms - %p\n", pb); 	// adreses veertiiba pirms - 0x7ffd72f25328
	printf("mainiigaa veertiiba pirms - %d\n", b);	// mainiigaa veertiiba pirms - 5
	
	*pb = *pb + 1;
	
	printf("adreses veertiiba peec - %p\n", pb); 	// adreses veertiiba peec - 0x7ffd72f25328
	printf("mainiigaa veertiiba peec - %d\n", b);	// mainiigaa veertiiba peec - 6
	
	// ================================================================================
	// Pointers - 3
	// ================================================================================
	
	int c = 5;
	int *pc = &c;
	int **ppc = &pc;
	
	printf("mainiigaa vertiiba - %d\n", c); 	// mainiigaa vertiiba - 5
	printf("mainiigaa adrese - %p\n", pc);		// mainiigaa adrese - 0x7ffdf600a184
	printf("adreses adrese - %p\n", ppc);		// adreses adrese - 0x7ffdf600a188
	printf("mainiigaa adrese - %p\n", *ppc);	// mainiigaa adrese - 0x7ffdf600a184
	printf("mainiigaa vertiiba - %d\n", **ppc);	// mainiigaa vertiiba - 5
	
	return 0;
}
