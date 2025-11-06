// print the given number is prime or not
#include<stdio.h>
main(){
	int n,i=1,count=0;
	printf("enter the number :");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0)
		count++;
		i++;
	}
	if(count==2)
	printf("%d it is prime",n);
	else
	printf("%d is not prime",n);
}
