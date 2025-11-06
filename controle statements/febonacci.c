//Fibonacci series up to N terms
#include<stdio.h>
main(){
	int n,a=0,b=1,x;
	printf("enter the last number :");
	scanf("%d",&n);
	while(n>x){
	x=a+b;
	printf("%d ",x);
	a=b;
	b=x;
	
}
	
}

------------
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, i, nextTerm;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        if(i == 1)
            printf("%d ", a);  // first term
        else if(i == 2)
            printf("%d ", b);  // second term
        else {
            nextTerm = a + b;
            printf("%d ", nextTerm);
            a = b;  // update a
            b = nextTerm;  // update b
        }
    }

    return 0;
}

