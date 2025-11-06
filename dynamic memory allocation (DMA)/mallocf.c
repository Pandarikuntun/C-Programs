#include<stdio.h>
#include<stdlib.h>
main(){
	int n,i;
	float *ptr=NULL;
	printf("enter the size of memory :");
	scanf("%d",&n);
	ptr=(float*)malloc(n*sizeof(float));
	if(ptr==NULL)
	printf("memory is not created ");
	else{
		printf("\nmemory is created \n");
		for(i=0;i<n;i++){
			printf("enter the integers :");
			scanf("%f",(ptr+i));
		}
		for(i=0;i<n;i++){
			printf("%f ",*(ptr+i));
		}
		free(ptr);
	}
}
