//Write a C program to swap two numbers without using a third variable.
#include<stdio.h>
main(){
	int a,b;
	printf("enter the a and b values :");
	scanf("%d%d",&a,&b);
	printf("%d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}
