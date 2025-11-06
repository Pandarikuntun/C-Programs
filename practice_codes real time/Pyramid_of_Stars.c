//4.	Pyramid of Stars
#include<stdio.h>
main(){
	int m,i,j,s;
	printf("size of Pyramid of Stars");
	scanf("%d",&m);
    for (i=1;i<=m;i++)
	{
        for(s=1;s<=(m-i);s++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
		{
            printf("*");
        }
        printf("\n");
    }
}
