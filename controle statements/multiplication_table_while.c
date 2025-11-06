//print the multiplication table using while loop
#include<stdio.h>
main(){
	int i=1,n,p;
	printf("enter the number :");
	scanf("%d",&n);
	while(i<=10){
		p=i*n;
		printf("%d x %d =%d\n",n,i,p);
		i++;
	}
}
