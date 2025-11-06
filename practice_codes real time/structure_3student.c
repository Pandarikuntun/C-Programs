//Write a C program using struct to store and display information of 3 students (name, roll number, marks).
/*Description: You need to define a structure student with fields: name (string), roll (int), marks (float). 
Then, take input for 3 students and display them in a tabular format.
*/
#include<stdio.h>
struct student{
	char n[10];
	int r;
	int m;
};
main(){
	int i;
	struct student s[i];
	printf("enter the 3 student details\nname, roll number, marks \n one by one\n");
	for(i=0;i<3;i++){
		scanf("%s%d%d",s[i].n,&s[i].r,&s[i].m);
	}
	printf("student details\n");
	printf("\nName\tRoll no\tmarks\n");
	for(i=0;i<3;i++){
		printf("%s\t%d\t%d\n",s[i].n,s[i].r,s[i].m);
	}
	
}
