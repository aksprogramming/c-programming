#include<stdio.h>
int main(){

	int divident,divisor,quotient,remainder;

	printf("Enter the divident \n");
	scanf("%d",&divident);

	printf("Enter the divisor \n");
	scanf("%d",&divisor);

	quotient=divident/divisor;
	remainder=divident%divisor;
	
	printf("The Quotient is %d and remainder is %d \n",quotient,remainder);


	return 0;
}