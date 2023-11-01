#include <stdio.h>
#include <stdlib.h>

int main () 
{
  	FILE * myFile;
  	
  	long lSize;
  	char * buffer;
  	size_t result;

  	myFile = fopen("myfile.bin" , "rb");
  	if (pFile == NULL) 
  	{
  		fputs("File error",stderr); 
  		exit (1);
  	}

  	fseek(myFile , 0 , SEEK_END);
  	lSize = ftell(myFile);
  	rewind(myFile);

  	buffer = (char*) malloc (sizeof(char)*lSize);
  	
  	if (buffer == NULL) 
  	{
  		fputs("Memory error",stderr); 
  		exit(2);
  	}

  	result = fread (buffer,1,lSize,myFile);
  	
  	if (result != lSize) 
  	{
  		fputs("Reading error",stderr); 
  		exit(3);
  	}

  	fclose(myFile);
  	free(buffer);
  	
  	return 0;
}
