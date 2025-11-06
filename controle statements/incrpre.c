// incrimet operator.
// pre incriment
#include<stdio.h>
main(){
	int x=5,y;
	printf("enter the value :");
	//scanf("%d",&x);
	y=x++;
	printf("%d %d\n",x,y); //6 5
	y=x--;
	printf("%d %d\n",x,y);//5 6
	y=++x;
	printf("%d %d\n",x,y);//6 6 
	y=--x;
	printf("%d %d\n",x,y);//5 5
	
}
