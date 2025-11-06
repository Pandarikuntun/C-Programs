#include<stdio.h>
void convert(int num){
	int temp,x[32]={0},i=0;
	temp=num;
	while(num!=0){
		x[i]=num%2;
		num=num/2;
		i++;
	}
	for(i=31;i>=0;i--)
	printf("%d",x[i]);	
	num=temp;	
}
int main(){
	int n,bit,a;
	printf("enter the number :");
	scanf("%d",&n);
	convert(n);
	printf("\nenter the bit position\n");
	scanf("%d",&bit);
	while(1){
	printf("\n1 for clear\n");
	printf("2 for set\n");
	printf("3 for togle\n");
	scanf("%d",&a);
		switch(a){
		case 1:
			n&=~(1<<bit);
			convert(n);
			break;
		case 2:
			n|=(1<<bit);
			convert(n);
			break;
		case 3:
			n^=(1<<bit);
			convert(n);
			break;	
		default:printf("defalt");
	}
	
	}
}
