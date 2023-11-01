#include <stdio.h>

// gcc fopen.c -o fopen.out
// ./fopen.out

int main ()
{
  	FILE * myFile;
  	myFile = fopen("myfile.txt", "w");
  
  	if (myFile != NULL)
  	{
    	fputs("fopen example", myFile);
    	fclose(myFile);
  	}
  
  	return 0;
}
