// print frime series up to n values
#include<stdio.h>
int main(){
	int i,n,j,count=0;
	printf("enter the n value :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d\t",i);
		count=0;
	}
	return 0;
}
