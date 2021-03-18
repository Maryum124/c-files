#include <stdio.h>
#include <conio.h>

int prod_price[10];
char prod_name[10];
int prod_quantity[10];
int total[10];
int net_total;

int main(){
int i=0;
int j=0;
char cust_name[20];
char dop[20];
char con='y';

	printf("Please enter your name: ");
	gets(cust_name);
	printf("Please enter date of purchase: ");
	scanf("%s",&dop);

	while(con=='y'){
		printf("\nPlease enter products first character : ");
		scanf(" %c",&prod_name[i]);
		printf("Please enter products price : ");
		scanf("%d",&prod_price[i]);
		printf("Please enter quantity : ");
		scanf("%d",&prod_quantity[i]);
		total[i]=prod_price[i]*prod_quantity[i];
		net_total=total[i]+net_total;
		printf("Do you wish to add more products?   y/n ");
		con=getche();
		printf("\n\n");
		i++;
	}

	printf("Mr. %s your payment slip for '%s' is: \n",cust_name,dop);

		while(prod_name[j]!='\0'){
			printf("Product: '%c'\t Price: '%d'\t Quantity: '%d'\t Total= %d\n",prod_name[j],prod_price[j],prod_quantity[j],total[j]);
			j++;
			}
			printf("The net total is = %d",net_total);
		}
