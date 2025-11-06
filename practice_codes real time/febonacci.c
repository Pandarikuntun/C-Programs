//Fibonacci series up to N terms
#include<stdio.h>
main(){
	int n,a=0,b=1,x=0;
	printf("enter the last number :");
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d ",b);
	while(n>x){
	x=a+b;
	printf("%d ",x);
	a=b;
	b=x;
	
}
	
}
