#include<stdio.h>
main(){
    int grade,x,y,z;
    scanf("%d",&grade);
    if(grade>33 ){  // 33>28  
        x=grade%5; // x=3
        y=5-x; // y=2
        z=grade+y;  // z=35  z=73+2  z=75
        if(z-grade<=2)  // 35-33
            printf("%d\n",z);
        else
            printf("%d\n",grade);
        }  
		else if(grade>4)
		printf("%d",grade);
        
}

