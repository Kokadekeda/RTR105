#include <stdio.h>

int main ()
{
	FILE * myFile;
	
  	char str [80];
  	float f;
  
  	myFile = fopen ("myfile.txt","w+");
  	fprintf (myFile, "%f %s", 3.1416, "PI");
  	rewind (myFile);
  	fscanf (myFile, "%f", &f);
  	fscanf (myFile, "%s", str);
  	fclose (myFile);
  	printf ("I have read: %f and %s \n",f,str);
  	
  	return 0;
}
