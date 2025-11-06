// write a program that accepts marks in five subjects and calculates the total persentage marks.
#include<stdio.h>
main(){
	int marks1,marks2,marks3,marks4,marks5,percentage;
	printf("enter the five subjects marks :");
	scanf("%d %d %d %d %d",&marks1,&marks2,&marks3,&marks4,&marks5);
	percentage=(marks1+marks2+marks3+marks4+marks5)*100/500;
	printf("percentage :%d",percentage);
	
	
}
