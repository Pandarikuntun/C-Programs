// swap two numbers 
#include<stdio.h>
main(){
	int a,b,temp;
	printf("enter a and b values :");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d b=%d\n",a,b);
	temp =a;
	a=b;
	b=temp;
	printf("before swap a=%d b=%d",a,b);
}
