// factorial of a given number using the while loop
#include<stdio.h>
main(){
	int i=1,n,f=1;
	printf("enter the number :");
	scanf("%d",&n);
	while(i<=n){
		f=f*i;
		i++;
	}
	printf("factorial %d is %d",n,f);
}
