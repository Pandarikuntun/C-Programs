//Accept an integer n from the user and print
//whether it is even or odd.
#include<stdio.h>
main(){
	int n;
	printf("enter the value :");
	scanf("%d",&n);
	if(n%2==0)
	printf("%d is even",n);
	else
	printf("%d is odd",n);
}
