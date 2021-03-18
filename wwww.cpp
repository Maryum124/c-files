#include <stdio.h>

void add(int n1, int n2, int n3); // fun declaration/

int main (){
	int num1, num2, num3;
	int sum;
	
	printf("enter a number:");
	scanf("%d", &num1);
	printf("enter a number:");
	scanf("%d", &num2);
	printf("enter a number:");
	scanf("%d", &num3);
	
	add(num1,num2,num3);
	 
	return 0;
	
}
void add(int n1, int n2, int n3){
	
int	sum=n1+n2+n3;
printf("sum=%d", sum);
 
}
