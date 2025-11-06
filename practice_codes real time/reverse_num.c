//reverse of number
#include<stdio.h>
main(){
	int n,d,rev=0;
	printf("enter the number :");
	scanf("%d",&n);
	while(n>0){
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
	printf("reverse :%d",rev);
}
