// multimplication table printing
#include<stdio.h>
main(){
	int i,n;
	printf("enter a value which table you want :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
		printf("%d x %d =%d\n",n,i,n*i);
}
