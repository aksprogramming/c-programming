#include<stdio.h>

int factorial(int i,int n){

	if(i<n){
		i=i+1;
		return i*factorial(i,n);
	}else{
		return 1;
	}
	
}

int main(){
	int i=1;
	int n;
	printf("Enter the Number To find Factorial :\n");
	scanf("%d",&n);

	printf("\nFactorial= %d \n",factorial(i,n));


	return 0;
}

// factorial(1);  /// 2
// 2*factorial(2);
// 2*3*factorial(3);
// 2*3*4*factorial(4);
// 2*3*4*5*factorial(5);
// 2*3*4*5*1;




