//print the up to n odd numbers
#include<stdio.h>
main(){
	int n,i=1;
	printf("enter the n value :");
	scanf("%d",&n);
	while(i<n){
		if(i%2!=0)
		printf("%d\n",i);
		i++;
		}
	}
