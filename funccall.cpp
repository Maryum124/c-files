#include <stdio.h>


void add(int n1,int n2,int n3, int n4);

int main (){
	int num1, num2, num3, num4;
	
	int sum;
	
	printf("enter a number:");
	scanf("%d", &num1);
	printf("enter a number:");
	scanf("%d", &num2);
	printf("enter a number:");
	scanf("%d", &num3);
	printf("enter a number:");
	scanf("%d", &num4);
	

	add(num1,num2,num3,num4);
	 

	
}
void add(int n1,int n2,int n3, int n4){
	
	int sum=n1+n2+n3+n4;

	printf("\nsum=%d",sum);
}
	

