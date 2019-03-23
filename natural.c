#include<stdio.h>
int main(){
	int limit;
	int a;

	printf("Enter the limit\n");
	scanf("%d",&limit);

	printf("First %d natural numbers are,\n",limit);

	for(a=1;a<=limit;a++){
		printf("\n %d",a);
	}

	printf("\n");

	return 0;
}