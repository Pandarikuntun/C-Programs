//Write a C program to accept N numbers from the user and print their sum.
#include<stdio.h>
main(){
	int n,i,sum=0;
	printf("enter the last number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	sum +=i;
	printf("sum = %d",sum);
}
