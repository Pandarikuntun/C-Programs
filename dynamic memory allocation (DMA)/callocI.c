#include<stdio.h>
main(){
	int n,*ptr=NULL,i;
	printf("enter the size :");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	printf("\nmemory is not created\n");
	else
	printf("\nmemory is created\n");
	for(i=0;i<n;i++)
	scanf("%d",(ptr+1))
}
