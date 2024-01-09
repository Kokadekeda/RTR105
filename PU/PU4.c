#include <stdio.h>
#include <stdbool.h>

// Kristaps Peteris Ansons
// 201RMC060

int main()
{
	char data_type;
	
	printf("-char [c]:\n");
	printf("-int [i]:\n");
	printf("-long long [l]:\n");
	printf("Izvelieties datu tipu: ");
	scanf(" %c", &data_type);
	
	if (data_type == 'c')
	{
		char number;
		char number_last;
		char result;
		char result_last;
		bool error = false;
		printf("Ievadiet skaitli: ");
		scanf(" %d", &number);
		printf("\n");
		result = number;
		while (number > 1)
		{
			result_last = result;
			number_last = number;
			number--;
			result *= number;
			if (result < result_last)
			{
				error = true;
				break;
			}
			if (number > number_last)
			{
				error = true;
				break;
			}
		}
		if (error == false)
		{
			printf("Izmantojot char datu tipu, faktorials sanak %d\n", result);
		}
		else
		{
			printf("Nav iespejams pareizi aprekinat faktorialu ar char datu tipu\n");
		}
		
	}
	else if (data_type == 'i')
	{
		int number;
		int number_last;
		int result;
		int result_last;
		bool error = false;
		printf("Ievadiet skaitli: ");
		scanf(" %d", &number);
		printf("\n");
		result = number;
		while (number > 1)
		{
			result_last = result;
			number_last = number;
			number--;
			result *= number;
			if (result < result_last)
			{
				error = true;
				break;
			}
			if (number > number_last)
			{
				error = true;
				break;
			}
		}
		if (error == 0)
		{
			printf("Izmantojot char datu tipu, faktorials sanak %d\n", result);
		}
		else
		{
			printf("Nav iespejams pareizi aprekinat faktorialu ar char datu tipu\n");
		}
	}
	else if (data_type == 'l')
	{
		long long number;
		long long number_last;
		long long result;
		long long result_last;
		bool error = false;
		printf("Ievadiet skaitli: ");
		scanf(" %d", &number);
		printf("\n");
		result = number;
		while (number > 1)
		{
			result_last = result;
			number_last = number;
			number--;
			result *= number;
			if (result < result_last)
			{
				error = true;
				break;
			}
			if (number > number_last)
			{
				error = true;
				break;
			}
		}
		if (error == 0)
		{
			printf("Izmantojot char datu tipu, faktorials sanak %d\n", result);
		}
		else
		{
			printf("Nav iespejams pareizi aprekinat faktorialu ar char datu tipu\n");
		}
	}
	else 
	{
		printf("datu tips netika atpazits");
	}
}
