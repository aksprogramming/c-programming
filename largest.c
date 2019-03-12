#include<stdio.h>
int main(){

	int a,b,c;

	printf("enter the first number \n");
	scanf("%d",&a);
	printf("enter the second number \n");
	scanf("%d",&b);
	printf("enter the third number \n");
	scanf("%d",&c);

	if(a>=b)
	{
		if (a>=c)
			printf("The largest number is %d \n",a);
		else
			printf("The largest number is %d \n",c);
	}
	else{
		if (b>=c)
			printf("The largest number is %d \n",b);
		else
			printf("The largest number is %d \n",c);
	}
	return 0;
}