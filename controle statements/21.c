/*write a program that accepts the radius of a circle 
and calculate the area and perimeter of that circle*/
#include<stdio.h>
#define pi 3.14;
main(){
	int r;
	float p,a;
	printf("enter the radius of a circle :");
	scanf("%d",&r);
	a=3.14*r*r;
	p=2*3.14*r;
	printf("area of a circle :%.2f\n",a);
	printf("perimeter of circle :%.2f\n",p);
}
