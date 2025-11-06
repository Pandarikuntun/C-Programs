#include<stdio.h>
#include<stdlib.h>
main(){
	int n,i,*ptr=NULL;
	printf("enter the size of memory :");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	printf("memory is not created ");
	else{
		printf("\nmemory is created \n");
		for(i=0;i<n;i++){
			printf("enter the integers :");
			scanf("%d",(ptr+i));
		}
		for(i=0;i<n;i++){
			printf("%d ",*(ptr+i));
		}
		free(ptr);
	}
}
