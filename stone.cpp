#include<stdio.h>
int main(){

	int a;
	int b;
	printf("ENTER YOUR NUMBER:");
	scanf("%d",&a);
	printf("ENTER YOUR NUMBER:");
	scanf("%d",&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	
	}
	printf("a=%d\n",a);
		printf("a=%d\n",b);
	
}
