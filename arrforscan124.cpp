#include <stdio.h>

int main (){
	int a[10]={2,5,7,2,8,0,7,4,3,6};
	int i;
	

	for (i=0; i<10; i++){
		scanf("%d",& a[i]);
		printf("a[%d]=%d \n", i ,a[i]);
		printf("array of 2 is %d", a[2]);
	}
}
