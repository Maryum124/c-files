#include<stdio.h>
#include<conio.h>

int main()
{
	int i,m,n;
	char ch='y';
	
	while(ch=='y')
	{
		printf("\nEnter table no.:");
		scanf("%d",&i);
	    for(m=1;m<11;m++)
		{
			n=i*m;
			printf("%d*%d=%d \n",i,m,n);
		}
		printf("DO YO WANT TO CONTINUE:");
		ch=getche();
		
		
	}
	
	
}
