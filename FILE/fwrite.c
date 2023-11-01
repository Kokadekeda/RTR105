#include <stdio.h>

int main ()
{
  	FILE * myFile;
  	
  	char buffer[] = { 'x' , 'y' , 'z' };
  	
  	myFile = fopen ("myfile.bin", "wb");
  	fwrite (buffer , sizeof(char), sizeof(buffer), myFile);
  	fclose (myFile);
  	
  	return 0;
}
