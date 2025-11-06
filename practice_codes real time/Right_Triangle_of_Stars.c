//2.	Right Triangle of Stars
#include<stdio.h>
main(){
	int m,i,j;
	printf("size of right angle tringle :");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
