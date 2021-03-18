#include<stdio.h>
#include <conio.h>

int main (){
	 int num1,num2;
	 char ch1;
	 
	 printf("enter two numbers:\t");
	 scanf("%d %d", &num1, &num2);
	 printf("enter option:\n 1 for additon\n 2 for substraction\n 3 for multiplication\n 4 for division\n");
	//ch1=getche();
	scanf("%d", &ch1);
	
	 
	 switch(ch1)
	 {
	 	case 1:
	 		printf("sum is : %d", num1+num2);
	 	break;
	 	
	 	case 2:
	 		printf("diff is : %d", num1-num2);
	 	break;
	 	
	 	case 3:
	 		printf("multiply is : %d", num1*num2);
	 	break;
	 	
	 	case 4:
	 		printf("diff is : %d", num1/num2);
	 	break;
	 		default:
	 			printf("ERROR");
	 		
	 }
}

