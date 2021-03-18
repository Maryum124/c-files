#include<stdio.h>
#include<conio.h>


int input(); //there is a func thats why we give array outside main body
char pn[50];
int pc[50];
int qty[50];
int t[50];
char name[20];
char dop[10];
//int grand_total;

int main(){
	
	printf("Enter Customer name: \n");
	scanf("%s", &name);
	printf("Enter Date of Purchase: \n");
	scanf("%s", &dop);		
	input();
	}

int input(){
	int n=0;
	char input;
	while(input != 'q'){
	printf("Enter product details: \n");
	scanf("%c \t %d \t %d", &pn[n], &pc[n], &qty[n]);
	n++;
	input = getch();
	}
	printf("Customer Name: %s \t\t Date of Purchase: %s", name, dop);
	while(n != 0){
		
		printf("\n %c \t %d \t %d ", pn[n], pc[n], qty[n]);
		n--;
	}
}
