#include<stdio.h>
int main(){
	int a,x[16]={0},i,temp,b,y[16]={0};
	printf("enter the number :");
	scanf("%d",&a);
	temp=a;
	while(a!=0){
		x[i]=a%2;
		a=a/2;
		i++;
	}
	for(i=15;i>=0;i--)
	printf("%u",x[i]);
	printf("\nenter the number which you are divide :");
	scanf("%d",&b);
	int count=0;
	while(b!=0){
		x[i]=b%2;
		b=b/2;
		i++;
		count++;
	}
	temp=temp>>count;
	while(a!=0){
		y[i]=a%2;
		a=a/2;
		i++;
	}
	for(i=15;i>=0;i--)
	printf("%u",y[i]);
}
