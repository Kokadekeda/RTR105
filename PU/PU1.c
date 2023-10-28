#include <stdio.h>
#include <string.h>

// Kristaps Peteris Ansons
// 201RMC060

int main()
{
	long int int_number_1;
	long int int_number_2;
	long int int_result;
	
	printf("number 1:\n");
	scanf("%ld", &int_number_1);
	
	printf("number 2:\n");
	scanf("%ld", &int_number_2);
	
	int_result = int_number_1 * int_number_2;
	
	printf("result:\n");
	printf("%ld\n", int_result);
	
	return 0;
}
