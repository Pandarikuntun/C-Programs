// switch case using the prime or not and factorial
#include<stdio.h>
main(){
	int n,i,fact=1,count=0,choice,p;
	printf("enter the number :");
	scanf("%d",&n);
	printf("1 for the fact\n 2for the prime \n 3for the mult");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			printf("factorial is %d",fact);
			break;
		case 2:
			for(i=1;i<=n;i++){
				if(n%i==0)
				count++;
			}
			if(count==2)
			printf("prime");
			else
			printf("not prime");
			break;
		case 3:
			for(i=1;i<=10;i++){
				p=n*i;
			printf("%d * %d =%d\n",n,i,p);
		}
	}
}
