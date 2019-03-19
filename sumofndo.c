#include<stdio.h>
int main(){
	int i,limit,sum=0;

	printf("Enter the Limit \n");
	scanf("%d",&limit);

	i=1;
	do{
		sum=sum+i;
		i=i+1;
	}while(i<=limit);

	printf("Sum of %d natural number is %d \n",limit,sum);

}