#include <stdio.h>
#include <stdlib.h>
#include "interval.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FILE *f;
	int length,i;
	float *array;
	
    f=fopen("test.txt","r");
	if (f==NULL) {
		printf("file can not be open");
		return 1;
	}
	fscanf(f,"%d",&length);
	array=(float*)malloc(length*sizeof(float));
	for (i=0;i<length;i++)
		fscanf(f,"%f",&array[i]);
	fclose(f);
	function(array,length);
	for (i=0;i<length;i++)
		printf("%.2f ",array[i]);
	printf("\n");
	
	return 0;

}
