//write equlivalent if...else statements for the following nested switch statements.
#include<stdio.h>
main(){
	int x,y,z;
	printf("enter the x nad y value :");
	scanf("%d%d",&x,&y);
	switch(x){
		case 10:
			z++;
			printf("%d\n",z);
			break;
		case 20:
			z--;
			printf("%d\n",z);
			break;
		case 30:
			switch(y){
				case 2:
					z=z+3;
					printf("%d\n",z);
					case 4:
					case 5:
						z=z+10;
						printf("%d\n",z);
						break;
					default:
						z=z-2;
						printf("%d\n",z);
			}
	//	default:
	//		printf("ivalid option");
	}
}
