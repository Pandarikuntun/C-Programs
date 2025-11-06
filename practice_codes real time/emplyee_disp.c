/*Write a C program to manage employee details with:
Employee ID, Name, Salary.
Functions to input and display employee details for n employees.
one employee is missed that person id is there you can use the id for printing the employee full data
*/
#include<stdio.h>
struct employee{
	char name[50];
	int id;
	float salary;
};
int main(){
	int n,i,x;
	printf("enter the no of employee ");
	scanf("%d",&n);
	struct employee emp[n];
	for(i=0;i<n;i++){
		
		printf("ente the details of employee name id salary :");
		scanf("%s%d%f",emp[i].name,&emp[i].id,&emp[i].salary);
	}
	printf("enter the missing employee id :");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
	if(x==emp[i].id){
	printf("employee data is :\n");
	printf("name :%s\n",emp[i].name);
	printf("Employee Id:%d\n",emp[i].id);
	printf("Salary :%.2f\n",emp[i].salary);
}
else 
printf("not match found in data base");
}
}
