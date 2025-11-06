// write this piece of code in an efficient way
#include<stdio.h>
main(){
	int x,y;
	printf("enter the x and y value :");
	scanf("%d %d",&x,&y);
	if(x==0)
	printf("%d",y++);
	if(x>0)
	printf("%d",y--);
	if(x<0)
	printf("%d",y+=2);
}
