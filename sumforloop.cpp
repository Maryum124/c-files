#include <stdio.h>

int main (){
	 int sum=0,i,n;
	 
	 for(i=0; i<3; i++)
	 {
	 	printf("Enter number");
	 	scanf("%d", &n);
	 	sum=sum+n;
	 	
	 }
	 printf("sum is %d", sum);
	 return 0;
}
