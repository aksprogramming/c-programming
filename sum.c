#include<stdio.h>
int main(){

	int i,d,sum=0,limit;
	printf("enter the limt\n");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++){
		printf("Eter the number \n");
		scanf("%d",&d);
		sum=sum+d;
	}	
	


	printf("sum of %d numbers are %d \n",limit,sum);

	return 0;
}