//1.	Square of Stars
#include<stdio.h>
int main(){
	int i,j,m;
	printf("print the squre pattern size :");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("*");
		}
		printf("\n");
	}
}
