/*Write a C program to demonstrate the difference
between a global variable and a local variable with the same name.*/
#include<stdio.h>
int r=3;
void n(){
	int r=20;
	printf("%d\n",r);
}
main(){
	int r=10;
	printf("%d\n",r);
	n();
}
