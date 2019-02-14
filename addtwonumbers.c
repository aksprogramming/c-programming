#include<stdio.h>
int main(){
	int firstnumber,secondnumber,sum;
	printf("Please Enter Two numbers \n");
	scanf("%d %d",&firstnumber,&secondnumber);
	sum=firstnumber+secondnumber;
	printf("The out is %d + %d = %d \n",firstnumber,secondnumber,sum);

	return 0;
}