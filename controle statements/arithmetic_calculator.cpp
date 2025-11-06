//with return type with arguments
#include<iostream>
using namespace std;
template<typename t1,typename t2>
t1 sum(t1 x,t2 y){
	return x+y;
}
template<typename t1,typename t2>
t2 sub(t2 x,t2 y){
	return x-y;
}
template<typename t1,typename t2>
t1 mult(t1 x,t1 y){
	return x*y;
}
template<typename t1,typename t2>
t2 div(t2 x,t1 y){
	return x/y;
}
int main(){
	int x,y;
	float a,b;
	cin>>a>>b;
	cout<<sum<float,int>(a,y)<<endl;
	cout<<sub<int,int>(x,y)<<endl;	
	cout<<mult<float,float>(a,b)<<endl;	
	cout<<div<int,float>(x,b)<<endl;	
}
