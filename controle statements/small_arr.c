//Write a C program to find the largest and smallest element in an array of size N entered by the user.
#include<stdio.h>
main(){
	int a[100],i,j,b[0],n;
	printf("enter the size of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
		if(a[i]<b[0]){
		b[0]=a[i];
	}
		printf("\n%d",b[0]);
}
