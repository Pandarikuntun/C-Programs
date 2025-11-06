// write a program to accept a number in decimal  and print the number in octal and hexadecimal
#include<stdio.h>
main(){
	int a;
	printf("enter a decimal number :");
	scanf("%d",&a);
	a=(float)a;
	printf("octal number :%o\n",a);
	printf("hexadecimal number :%x",a);
}
