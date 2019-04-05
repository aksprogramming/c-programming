#include<stdio.h>
int reverse(int);
int main(){
	int a;
	printf("Enter the Number \n");
	scanf("%d",&a);
	printf("\n");
	
	if(a==reverse(a)){
		printf("The Given Number is plaindrome \n");
	}else{
		printf("The Given Number is Not plaindrome \n");
	}


	return 0;
}
int reverse(int a){

	int remainder;
	int reverse=0;

	while(a!=0){
		
		remainder=a%10;
		reverse=reverse*10+remainder;
		
		a=a/10;

	}
	return reverse;
}