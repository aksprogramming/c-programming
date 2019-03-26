#include<stdio.h>

int factorial(int n){

	if(n>1){
		return n*factorial(n-1);
	}else{
		return 1;
	}
	
}

int main(){
	int i=1;
	int n;
	printf("Enter the Number To find Factorial :\n");
	scanf("%d",&n);

	printf("\n %d! = %d \n",n,factorial(n));


	return 0;
}



// 5*factorial(4);
// 5*4*factorial(3);
// 5*4*3*factorial(2);
// 5*4*3*2*factorial(1);
// 5*4*3*2*1;







