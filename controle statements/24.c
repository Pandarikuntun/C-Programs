/* accept any two numbers. if the first number is greater then second 
then print the difference of these two numbers, otherwise printf their sum.
write  this program using ternary operator.*/
#include<stdio.h>
main(){
	int a,b;
	printf("enter the two numbers :");
	scanf("%d %d",&a,&b);
	a>b ? printf("difference is:%d",a-b) :printf("sum is:%d",a+b);
}
