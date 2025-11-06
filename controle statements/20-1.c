// what is the output of the following programs
#include<stdio.h>
main(){
	int a=5;
	begin:
		if(a){
			printf("%d\n",a);
			a--;
			goto begin;
		}
}
