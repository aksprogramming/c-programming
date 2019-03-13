#include<stdio.h>
int main(){
	int sum=0,limit=0,i=0;
	printf("enter the limit? \n");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){
		sum=sum+i;	
	}

	printf("sum of first %d natural number is %d \n",limit,sum);

	return 0;
}