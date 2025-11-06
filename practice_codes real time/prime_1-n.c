//Write a C program to print all prime numbers between 1 and N, where N is entered by the user
#include<stdio.h>
main(){
	int n,i,j,count=0;
	printf("enter last number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		if(i%j==0){
			count++;	
		}
	}
		if(count==2)
		printf("%d\t",i);
		count=0;
		
	}
}
