/* Write a C program that:
Reads a temperature in Celsius from the user.
Converts it to Fahrenheit using:
F=(C×9/5)+32
Prints the Fahrenheit value. */
#include<stdio.h>
int main(){
	float C,F;
	printf("enter the tempature in celsius :\n");
	scanf("%f",&C);
	F=((C*(9.00/5.00))+32.00);
	printf("temparature in celsius :%.2f\n",C);
	printf("temparature in fahrenheit :%.2f\n",F);
}
