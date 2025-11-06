// print even numbers up to n
#include<stdio.h>
main(){
	int i,n;
	printf("enter the last valu of even series which you want :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0)
		printf("%d\n",i);
	}	
}
