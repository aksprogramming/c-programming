#include<stdio.h>
int main(){

	int limit;
	int a;
	printf("Enter the Limit \n");
	scanf("%d",&limit);

	printf("\nEven number generation \n");

	for(a=2;a<=limit;a=a+2){
		printf("\n%d",a);
	}


	printf("\nOdd number generation \n");

	for(a=1;a<=limit;a=a+2){
		printf("\n%d",a);
	}

	printf("\n");


	return 0;
}