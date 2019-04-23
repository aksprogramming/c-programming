#include <stdio.h>
int sumof(int);
int main(){
	int n;
	printf("Enter the Positive Number : \n");
	scanf("%d",&n);

	int sum=sumof(n);
	printf("Sum = %d\n",sum);
	return 0;
}
int sumof(int n){
	if(n!=0)
		return n+sumof(n-1);
	else 
		return 0;
}

