/* Write a C program to read two numbers and perform the following operations using operators:
Addition
Subtraction
Multiplication
Division
Modulus
?? Expected Output:
Enter two numbers: 10 3
Addition = 13
Subtraction = 7
Multiplication = 30
Division = 3
Modulus = 1 */
#include<stdio.h>
main(){
	int a,b;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	printf("%d\n%d\n%d\n%d\n%d\n",a+b,a-b,a*b,a/b,a%b);
}
