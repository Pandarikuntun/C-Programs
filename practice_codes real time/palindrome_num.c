//check whether a number is palindrome
#include<stdio.h>
main(){
	int n,d,rev=0,temp;
	printf("enter the number :");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
	n=temp;
	if(rev==n)
	printf("%d is polindrome",n);
	else
	printf("%d is not a palindrome",n);
}
