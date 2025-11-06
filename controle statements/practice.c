/* Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade. */ 
#include<stdio.h>
main(){
    int grade,x,y,i,a[5]={0},b[5]={0},z;
    
    for(i=0;i<5;i++)
    {
    	scanf("%d",&grade);
    if(grade>33){
        x=grade%5;
        y=5-x;
        z=grade+y;
        if(z-grade<=2)
        a[i]=z;
        else
     a[i]=grade;
        }   
         else if(grade>4)
a[i]=grade;
  
}
for(i=0;i<5;i++)
{
 a[i]=a[i+1];
 
}
for(i=0;i<4;i++)
{
 printf("%u\t",a[i]);
 
}
}
