//Check whether a number is Prime or not?
#include<stdio.h>
main(){
	int n,i,count=0;
	printf("enter a number :");
	scanf("%d",&n);
	if(n<2)
	printf("%d is not a prime numbre",n);
	else{
	
	for(i=1;i<=n;i++)
	if(n%i==0)
	count++;
	

	if(count==2)
	printf("\n%d is prime",n);
	else
	printf("\n %d not prime",n);
}
}
