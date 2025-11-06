#include<stdio.h>
int main(){
	int a,x[32]={0},i=0;
	printf("enter the decimal number :");
	scanf("%d",&a);
	while(a!=0){
		x[i]=a%2;
		a=a/2;
		i++;
	}
	for(i=31;i>=0;i--)
	printf("%d",x[i]);
	
}
