#include <stdio.h>

int main (){
	int i;
	int a[10];
    for (i=0; i<10; i++){
    	printf("Element=%d",i);
    	scanf("%d",& a[i]);
    	
    	printf("a[%d]=%d \n", i ,a[i]);
	
		printf("array of 2 is %d", a[2]);
	}
}
