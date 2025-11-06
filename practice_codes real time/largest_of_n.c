//Find the largest of N numbers. Do you want me to give it?
#include<stdio.h>
main(){
	int i,n[50],a,g[i];
	printf("enter the size");
	scanf("%d",&a);
	printf("enter the numbers\n");
	for(i=0;i<a;i++){
	scanf("%d",&n[i]);
	}
	printf("numbers are\n");
	for(i=0;i<a;i++){
		printf("%d ",n[i]);
	}
	for(i=0;i<a;i++)
	if(g[0]<n[i]){
		g[0]=n[i];
	}
	printf("\n%d",g[0]);	
}
