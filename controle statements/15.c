#include<stdio.h>
main(){
	int var,x=1,y=2;
	printf("enter the x or y :");
	scanf("%d",var);
	switch(var){
		case 'x':
			printf("%d",x++);
			break;
		case 'y':
			printf("%d",y++);
			break;
	}
}
