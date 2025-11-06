//Write a C program to find the sum of digits of a given number.
#include<stdio.h>
int main(){
	int x,sum=0,r;
	printf("enter the number :");
	scanf("%d",&x);
	while(x>0){
		r=x%10;
		sum+=r;
		x/=10;
	}
	printf("sum is %d",sum);
	
}
