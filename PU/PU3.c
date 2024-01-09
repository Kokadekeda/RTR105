#include <stdio.h>
#include <string.h>

// Kristaps Peteris Ansons
// 201RMC060

void izprintet(char chars[])
{
	for (int i = 0; i < 3; i++)
	{
		printf("%c", chars[i]);
	}
	printf("\n");
}

void dilstosa(char chars[])
{
	char a;
	if (chars[0] < chars[1])
	{
		a = chars[1];
		chars[1] = chars[0];
		chars[0] = a;
	}
	if (chars[1] < chars[2])
	{
		a = chars[2];
		chars[2] = chars[1];
		chars[1] = a;
	}
	if (chars[0] < chars[1])
	{
		a = chars[1];
		chars[1] = chars[0];
		chars[0] = a;
	}
	izprintet(chars);
}

void augosa(char chars[])
{
	char a;
	if (chars[0] > chars[1])
	{
		a = chars[1];
		chars[1] = chars[0];
		chars[0] = a;
	}
	if (chars[1] > chars[2])
	{
		a = chars[2];
		chars[2] = chars[1];
		chars[1] = a;
	}
	if (chars[0] > chars[1])
	{
		a = chars[1];
		chars[1] = chars[0];
		chars[0] = a;
	}
	izprintet(chars);
}

int main()
{
	char chars[3];
	char a_d;
	
	printf("ievadiet tris burtus kopa: ");
	scanf(" %c%c%c", &chars[0], &chars[1], &chars[2]);
	
	printf("sakartot augosa [a] vai dilstosa [d] seciba?: ");
	scanf(" %c", &a_d);
	
	if (a_d == 'a')
	{
		augosa(chars);
	}
	else if (a_d == 'd')
	{
		dilstosa(chars);
	}
	else
	{
		printf("kaut kas ievadits nepareizi");
	}
	
	return 0;
}
