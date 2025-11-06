/*solve this damgling else problem given in the chapter without using bracee.make the else
match with the first if without inserting any braces.*/ 
#include<stdio.h>
main(){
	char grade;
	int marks;
	printf("enter the grade :");
	scanf("%c",&grade);
	printf("enetr marks ");
	scanf("%d",marks);
	//grade=touppar(grade);
	if(grade='A')
		if(marks>95)
		printf("excelent\n");
		else
		printf("work hard for getting A grade\n");
}
