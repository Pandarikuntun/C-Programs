// maximum and minium of two number
#include<stdio.h>
main(){
	int a,b;
	printf("enter the a and b vales :");
	scanf("%d%d",&a,&b);
	if(a<b)
	printf("minimum is %d\n",a);
	else
	printf("maximum is %d\n",b);
	if(b<a)
	printf("minimum is %d\n",a);
	else
	printf("maximum is %d\n",b);
}
