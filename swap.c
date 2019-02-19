#include<stdio.h>
int main(){
	int firstnumber,secondnumber,temp;

	printf("Enter the first number\n");
	scanf("%d",&firstnumber);

	printf("Enter the second number \n");
	scanf("%d",&secondnumber);

	temp=firstnumber;

	firstnumber=secondnumber;
	
	secondnumber=temp;


	printf("After swapping firstnumber=%d and secondnumber=%d \n",firstnumber,secondnumber );



	return 0;
}
