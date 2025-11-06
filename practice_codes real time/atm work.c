/* Write a C program to simulate an ATM machine with the following features:
Ask the user to enter their PIN (fixed PIN = 1234).
If PIN is correct, show menu:
Check Balance
Deposit
Withdraw
Exit
Perform the operation and update balance.
If PIN is wrong, print "Invalid PIN" and exit.*/
#include<stdio.h>
int main(){
	int pin=1234,x,withdrow,deposite;
	float balance =0;
	printf("Enter the pin");
	scanf("%d",&x);
	if(pin==x){
		printf("1 Check balance \n");
		printf("2 Deposite \n");
		printf("3 Withdrow \n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Balance :%f",balance);
			break;
			case 2:
				printf("enter the Deposite ammount :");
				scanf("%d",&deposite);
				balance+=deposite;
				printf("deposite sucessfully\n");
			break;
			case 3:
				printf("enter the Withdrow ammount :");
				scanf("%d",&withdrow);
				if(balance>withdrow){
					balance-=withdrow;
					printf("Withdrow is sucess take the money in bellow \n");
				}
				else 
				printf("insufficent balance \n");
				break;
		}
	}
	else
	printf("Invalid PIN");
}
