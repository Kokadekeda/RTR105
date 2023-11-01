#include <stdio.h>

// gcc fprintf.c -o fprintf.out
// ./fprintf.out

int main ()
{
   	FILE * myFile;
   
   	int n;
   	char name[100];

   	myFile = fopen("myfile.txt","w");
   
   	for (n=0 ; n<3 ; n++)
   	{
     	puts("please, enter a name: ");
     	gets(name);
     	fprintf(myFile, "Name %d [%-10.10s]\n",n+1,name);
   	}
   
   	fclose(myFile);

   	return 0;
}
