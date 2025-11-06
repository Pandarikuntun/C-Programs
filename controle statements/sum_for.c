/*Write a C program to print the sum of all natural numbers 
from 1 to N using a for loop */
#include<stdio.h>
main(){
	int n,i,sum=0;
	printf("enter the last number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;	
	}
	printf("sum is %d",sum);
}
