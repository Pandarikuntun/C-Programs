//bitwise left shift operator
#include<stdio.h>
int main()
{
	int a[32]={0},i=0,x,n,b[32]={0};
	printf("Enter number ");
	scanf("%u",&x);
	int temp=x;
	while(x!=0)
	{
		a[i]=x%2;
		x=x/2;
		i++;
	}
	printf("\nBinary before left shift ");
	for(i=31;i>=0;i--)
	printf("%u",a[i]);
	x=temp;
/*	printf("\nEnter n how many bit position shifting to L.H.S ");
	scanf("%d",&n);
*/	x=x&~((1<<1)|(1<<3)|(1<<5)|(1<<7)|(1<<9));
	i=0;
	while(x!=0)
	{
		b[i]=x%2;
		x=x/2;
		i++;
	}
	printf("\nresult ");
	for(i=31;i>=0;i--)
	printf("%u",b[i]);
}
