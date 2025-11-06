//3.	Inverted Right Triangle
#include<stdio.h>
main(){
	int m,i,j;
	printf("size of Inverted Right Triangle :");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=i;j<m;j++){
			printf("*");
		}
		printf("\n");
	}
}
