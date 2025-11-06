/*Static Variable Preservation
Write a program to show how a static variable inside a 
function preserves its value across multiple calls.*/
#include<stdio.h>
void num(){
	static int x=10;
	printf("%d\n",x);
}
int main(){
	num();
	num();
	num();
	return 0;
}
