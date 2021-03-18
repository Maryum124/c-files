#include <stdio.h>
#include <conio.h>

 int main (){
 	 char ch;
 	 
 	 
 	 printf (" Enter a alphabet:");
 	 ch=getche();
 	 
 	 if(ch>='a' && ch<='z') || (ch>='A' && ch<='Z')
 	 {
 	 	printf ("%c is alphabet", ch);
 	 }
 }
