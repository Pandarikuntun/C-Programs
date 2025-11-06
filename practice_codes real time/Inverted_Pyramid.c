//5.	Inverted Pyramid
#include<stdio.h>
main(){
	int m,i,j,s;
	printf("enter the rows :");
	scanf("%d",&m);
	for(i=m;i=(m-1);i--){
		for(s=(m-1);s=1;s--){
			printf(" ");
		}
		for(j=(2*i-1);j=1;j--){
			printf("*");
		}
		printf("\n");
	}
}
