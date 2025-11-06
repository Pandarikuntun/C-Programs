// print the sum of digits of given number
#include<stdio.h>
main(){
	int n,r,i,sum=1;
	printf("enter the number :");
	scanf("%d",&n);
	while(i<=n){
		r=n%10;
		sum=sum+r;
		n/=10;
		i++;	
	}
	printf("%d",sum);
}
