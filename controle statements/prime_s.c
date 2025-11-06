#include<stdio.h>
int main(){
	int count=0,n,i;
	printf("enter the last number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
		count++;
	}
		if(count==2)
		printf("is prime");
		else
		printf("not prime");

}
