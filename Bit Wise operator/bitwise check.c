#include<stdio.h>
int main(){
	unsigned int a,b;
	printf("enter the first number :");
	scanf("%u",&a);
	printf("Enter the second number :");
	scanf("%u",&b);
	printf("a & b = %d\n",a&b);
	printf("a | b = %d\n",a|b);
	printf("~ a = %u\n",~a);
	printf("~ b = %u\n",~b);
	printf("a<<2 =%d\n",a<<2);
	printf("b<<2 =%d\n",b<<2);
	printf("a>>4 =%d\n",a>>4);
	printf("b>>4 =%d\n",b>>4);
}
