//Write a C program to find the factorial of a number using recursion.
#include<stdio.h>
int fact(int n){
	int r;
	if(n==0)
	r=1;
	else
	r=n*fact(n-1);
	return r;
}
int main(){
	int x,r;
	printf("enter the number :");
	scanf("%d",&x);
	r=fact(x);
	printf("%d factoreal is %d",x,r);
}
