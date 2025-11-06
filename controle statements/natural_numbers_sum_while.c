// print the sum of natural numbers
#include<stdio.h>
main(){
	int n,i=1,sum=0;
	printf("enter the last digit :");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}
