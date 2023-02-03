#include<iostream>
using namespace std;

int fib(int x){
	
	if(x<2)
	return x;
	else
	return fib(x-2)+fib(x-1);
}


int main(){
	int r=fib(10);
	cout<<" "<<r;
	return 0;
}
