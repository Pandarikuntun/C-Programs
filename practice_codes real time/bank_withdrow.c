/*Write a C program that simulates a simple ATM withdrawal:
Ask the user to enter their account balance and withdrawal amount.
If withdrawal amount is greater than balance, print Insufficient Balance.
Otherwise, subtract and show the remaining balance.*/
#include<stdio.h>
int main(){
	int balance,wamount;
	printf("enter the balance :");
	scanf("%d",&balance);
	printf("enter the withdrowl amount :");
	scanf("%d",&wamount);
	printf("balance %d\n",balance);
	if(balance<wamount)
	printf("Insufficient Balance\n");
	else
	printf("remaining balance :%d\n",balance-wamount);
	return 0;
}
