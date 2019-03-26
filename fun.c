#include<stdio.h>
void sumtwo(int,int);
int main(){


	sumtwo(10,10);

	sumtwo(20,10);


	sumtwo(50,100);


	return 0;

}
void sumtwo(int a1,int b1){
	int sum=a1+b1;

	printf("\n %d + %d = %d \n",a1,b1,sum);
}




