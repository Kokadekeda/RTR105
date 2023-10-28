#include <stdio.h>
#include <string.h>

// Kristaps Peteris Ansons
// 201RMC060

int main()
{
	char char_dec;

	
	printf("DEC number:\n");
	scanf("%c", &char_dec);
	
	printf("BIN number:\n");
	
	for (int i = 4; i > 0; i--)
	{
		printf("%d", (char_dec >> i-1) & 1);
	}
	
	printf("\n");
	
	return 0;
}
