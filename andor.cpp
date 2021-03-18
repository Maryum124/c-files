#include <stdio.h>
 
 int main (){
 	 int a,b,c;
 	 a=300, b=15, c=500;
 	 
 	 if (a>b || a>c)
 	 {
 	 	printf("a is greatest");
 	 	}
 
    else 
 	{
 		if (b>c || c>a)
 		{
 		
 		printf("b is greatest");
 		}
 		else
 		{
 			printf("c is greatest");
 		}
 	}
 	
 	 
 }
