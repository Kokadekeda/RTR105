#include <stdio.h>

// gcc variables.c -o variables.out
// ./variables.out

int main(void)
{
	int i;
	
	printf("i vērtibas izmers baitos: %ld\n", sizeof(i));	// 4
	printf("i vērtibas atrašanas vieta atmiņā: %p\n", &i); // 0x7ffcde5ebe04
	printf("i vērtiba (dec): %d\n", i); 			// 32764
	printf("i vērtiba (oct): %#o\n", i);			// 077774
	printf("i vērtiba (hex): %#x\n", i);			// 0x7ffc
	printf("i vērtiba (real): %#f\n", i);			// 0.000000
	printf("i vērtiba (real): %#e\n", i);			// 0.000000e+00
	printf("\n");
	
	i = 25;
	printf("i = 25;");
	printf("\n");
	
	printf("i vērtibas izmers baitos: %ld\n", sizeof(i));	// 4
	printf("i vērtibas atrašanas vieta atmiņā: %p\n", &i); // 0x7ffcde5ebe04
	printf("i vērtiba (dec): %d\n", i); 			// 25
	printf("i vērtiba (oct): %#o\n", i);			// 031
	printf("i vērtiba (hex): %#x\n", i);			// 0x19
	printf("i vērtiba (real): %#f\n", i);			// 0.000000
	printf("i vērtiba (real): %#e\n", i);			// 0.000000e+00
	printf("\n");
	
	return 0;
}
