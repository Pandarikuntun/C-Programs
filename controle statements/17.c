#include<stdio.h>
main(){
	int x=2,y=20;
	switch(x){
		y=30;
		case 1:
			y++;
			break;
		case 2:
			y--;
			break;
		defalt:
			y=y+2;
	}
	printf("y is %d\n",y);
}
