//find the absolute value of number
/* absolute value is a non negative number 
if negative number is given then it conver it in to positive
*/
#include<stdio.h>
main(){
	int n,count=0,i;
	printf("enter a number :");
	scanf("%d",&n);
	if(n<0){
		for(i=-1;i>=n;i--){
		count++;
	}
	printf("absolute value is %d",count);
	}
	else
	printf("absolute value is %d",n);
}
