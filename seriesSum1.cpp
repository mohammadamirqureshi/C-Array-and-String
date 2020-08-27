#include<iostream>
using namespace std;

int func(int n){
	
	if(n%2==0) return n/2;
	else return -((n+1)/2);
	
}

int main(){
	
	int n;
	
	cout<<"Enter n : ";
	cin>>n;
	//   -1+2-3+4-5+6.......((-1)^n)*n
	cout<<"series sum = "<<func(n);
	
	return 0;
}
