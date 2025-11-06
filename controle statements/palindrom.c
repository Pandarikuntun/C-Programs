// print the given number is palindrom or not
#include<stdio.h>
main(){
	int n,r,sum=0;
	printf("enter the n value :");
	scanf("%d",&n);
	int temp=n;
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n/=10;
		}
	n=temp;
	if(temp==sum)
	printf("Palindrom");
	else
	printf("not palionrom");
}
