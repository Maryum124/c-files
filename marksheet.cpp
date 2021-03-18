#include <stdio.h>

int main (){
	int sub1,sub2,sub3,sub4,sub5;
	int obm;
	float per;
	
	
	
	printf("Enter marks of sub1:");
	scanf("%d", &sub1);
	printf("Enter marks of sub2:");
	scanf("%d", &sub2);
	printf("Enter marks of sub3:");
	scanf("%d", &sub3);
	printf("Enter marks of sub4:");
	scanf("%d", &sub4);
	printf("Enter marks of sub5:");
	scanf("%d", &sub5);
	obm=sub1+sub2+sub3+sub4+sub5;
	printf("%d",obm);
	per=obm*100/500;
	
	
	if(per<50 && per>0){
		printf("\n FAIL");
		
	}
	else if(per>=50 && per<60){
		printf("\n PASS");
	}
	else if(per>=60 &&per<70){
		printf("\n GRADE B");
	}
	else if(per>=70 &&per<80){
		printf("\n GRADE A");
	}
	else if(per>=80 &&per<90){
		printf("\n GRADE A 1");
	}
	
}
