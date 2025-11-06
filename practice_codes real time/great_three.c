// maximum and minium of two number
#include<stdio.h>
main(){
	int a,b,c,max;
	printf("enter the a and b vales :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
	if(a>c){
	max=a;}}
	else{ 
	if(b>c){
	if(b>a){
	max=b;}}
	else{
	max=c;}}
	printf("%d",max);
}
