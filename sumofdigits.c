#include<stdio.h>
int main(){

	int a;
	printf("Enter the Number \n");
	scanf("%d",&a);
	int temp=a;
	int sum=0;
	int remainder=0;
	while(a!=0){
		remainder=a%10;
		sum=sum+remainder;
		a=a/10;
	}

	printf("Sum of Digits of %d is %d \n",temp,sum);
	
	
	return 0;
}