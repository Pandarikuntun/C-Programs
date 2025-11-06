// calculate the area and circumferance of a circle
#include<stdio.h>
#define pi 3.141
main(){
	int r;
	float a,c;
	printf("enter the radius :");
	scanf("%d",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf("area of a circle :%f\n",a);
	printf("circuferance of a circle :%f",c);
}
