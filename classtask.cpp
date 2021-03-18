#include <stdio.h>


void add(int n1,int n2);
void sub(int n1, int n2);
void mul(int n1, int n2);
void div(int n1, int n2);


int main (){
	int num1, num2;
	int sum;
	
	printf("enter a number:");
	scanf("%d", &num1);
	printf("enter a number:");
	scanf("%d", &num2);
	
    add(num1,num2);
	sub(num1,num2);
	mul(num1,num2);
	div(num1,num2);
	 
}
void add(int n1,int n2){
	
	int sum=n1+n2;
	printf("\nsum=%d",sum);
}
	void sub(int n1, int n2){
	
	
	int sub2=n1-n2;
	printf("\nsub2=%d", sub2);
}
void mul(int n1, int n2){
	int mulT=n1*n2;
	printf("\nmulT=%d", mulT);
}
void div(int n1, int n2){
	float div2=n1/n2;
	printf("\ndiv2=%d", div2);
}


