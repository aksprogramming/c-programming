#include<stdio.h>
int main(){

	int a,b;

	printf("Enter the First number\n");
	scanf("%d",&a);
	printf("Enter the Second Number\n");
	scanf("%d",&b);

	a=a-b;

	b=a+b;

	a=b-a;


	printf("After swapping first number=%d and second number=%d",a,b);

	return 0;
}