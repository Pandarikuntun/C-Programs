//Write a C program using union to store and display employee details (name, id, salary).
/*Description:
Define a union employee with fields:
char name[20]
int id
float salary
Take input for all 3 fields, then display the values.
Observe how data is overwritten in a union (only the last stored value remains valid).
*/
#include<stdio.h>
union emp{
	char name[20];
	int id;
	int salary;
};
main(){
	union emp e1;
	printf("enter the employee details(name,id,salary)\n");
	printf("enter the name :");
	scanf("%s",e1.name);
	printf("%s\n",e1.name);
	printf("enter id :");
	scanf("%d",&e1.id);
	printf("%d\n",e1.id);
	printf("enter salary :");
	scanf("%d",&e1.salary);
	printf("%d\n",e1.salary);
}

