// write the following else .. if chaims using switch.
#include<stdio.h>
main(){
	int x,y;
	printf("enter the x , y vallues :");
	scanf("%d%d",&x,&y);
	if(x==1)
	y=x+1;
	printf("%d",y);
	elseif(x==2)
	{
		printf("y=0");
		printf("x=0");
	}
	elseif(x==3 || x==4 || x==5){
		printf("%d",y++);
	}
	elseif(x==6)
	printf("%d",);
	printf("%d",y+=4);
	else
	printf("%d",y--);
	
}
