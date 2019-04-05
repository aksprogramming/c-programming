#include<stdio.h>
int main(){

	int a;

	printf("Enter the Number \n");
	scanf("%d",&a);


	int count=0;


	while(a!=0){
		count=count+1;
		a=a/10;

	}

	printf("The Count of given digits of integer number is %d \n",count);

	return 0;	
}