//Write a C program to check whether a given year is a leap year or not using if-else.
#include<stdio.h>
main(){
	int x;
	printf("enter the year :");
	scanf("%d",&x);
	if((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
	printf("leap year");
	else
	printf("not leap year");
}
