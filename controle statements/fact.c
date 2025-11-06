//Write a C program with a function to calculate the factorial of a number entered by the user.
#include<stdio.h>
int fact(int n){
	int fact=1,i;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	printf("%d",fact(n));
	
}
