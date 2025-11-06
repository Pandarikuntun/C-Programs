// sum of natural numbers up to n 
#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("enter the last digit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum +=i;
	}
	printf("%d",sum);
}
