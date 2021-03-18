#include <stdio.h>

int main (){
	int i,j,k;
	//i=1, j=1;
	
	 printf("\nEnter a number:");
	 scanf("%d", &i);
	
	for(j=1; j<11; j++)
	{
		k=i*j;
	
	 printf("%d*%d=%d\t\n", i,j,k);
	}
	return 0;
}
