#include "interval.h"
void function(float* array,int length){
	int i,k,j;
	float average;
	if (length==0)
		return;
	average=array[0];
	k=1;
	for (i=1;i<length;i++){
		if (array[i]>array[i-1]) { 
			k++;
			average+=array[i];
			
	
		}
		else {
			average/=k;
			for(j=i-k;j<i;j++)
				array[j]=average;
			k=1;
			average=array[i];
		}	
	
	}
	average/=k;
	for(j=i-k;j<i;j++)
		array[j]=average;
	return;	
	
}
