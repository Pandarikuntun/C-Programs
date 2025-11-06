//Write a C program to count the frequency of each element in an array.
#include<stdio.h>
main(){
	int n,i,j,count,a[50],ax[]={0};
	printf("enter the size :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++){
		if(ax[i]==1)
		continue;
		count=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
			count++;
			ax[j]=1;
		}
	}
	printf("\n%d frequency is :%d",a[i],count);
}
}
