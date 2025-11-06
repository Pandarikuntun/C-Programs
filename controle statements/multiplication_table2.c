/* Write a C program to print the multiplication table
of a number entered by the user */
#include<stdio.h>
main(){
	int n,i;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}
}
