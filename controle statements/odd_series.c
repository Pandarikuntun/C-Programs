// print odd numbers up to n
#include<stdio.h>
main(){
	int i,n;
	printf("enter the last digit of odd series :");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2!=0)
		printf("%d\n",i);
	}
	
}
