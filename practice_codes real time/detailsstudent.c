/*Write a C program that takes the name, age, and CGPA 
of a student as input from the user and then displays 
them in a formatted way.*/
#include<stdio.h>
int main(){
	char name[20];
	int age;
	float cgpa;
	printf("enter the details of student name age and CGPA\n");
	scanf("%s%d%f",name,&age,&cgpa);
	printf("name %s\n",name);
	printf("age %d\n",age);
	printf("CGPA %f\n",cgpa);
	
}

