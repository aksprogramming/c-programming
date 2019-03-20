#include<stdio.h>
int main(){
	int n;
	int ans=1,i;

	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		ans=ans*i;
	}

	printf("\n factorial of a number %d is %d \n",n,ans);



	return 0;

}