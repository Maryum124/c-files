#include <stdio.h>
#include <conio.h>

int main (){
	
	char ch;
	
	printf ("Enter a alphabet:");
	scanf("%c", &ch);
	
	switch (ch){
		case'a':
			printf("a is a vowel");
			break;
		
		case 'e':
			printf("e is a vowel");
			break;
		
		case 'i':
			printf("i is a vowel");
			break;
		
		case 'o':
			printf("o is a vowel");
			break;
		
		case 'u':
			printf("u is a vowel");
			break;
		
		default: 
		     printf("%c is consonent", ch);
		
	}
	return 0;
}
