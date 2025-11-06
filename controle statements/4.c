#include<stdio.h>
main(){
	int a,b;
	printf("enter a and b values");
	scanf("%d %d",&a,&b);
	if(a<10)
	a=a-5;
	b=b+5;
	printf("%d\n%d",a,b);
}
