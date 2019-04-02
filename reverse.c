#include<stdio.h>
int main(){
	int a;
	printf("Enter the Number \n");
	scanf("%d",&a);
	printf("\n");

	int remainder;
	int reverse=0;
	int temp=a;

	while(a!=0){
		
		remainder=a%10;
		reverse=reverse*10+remainder;
		
		a=a/10;

	}

	printf("Revers of %d  is %d \n",temp,reverse);
	return 0;
}