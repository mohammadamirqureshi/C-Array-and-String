#include<iostream>
using namespace std;

int main(){
	
	int count=0;
	float prob=1,p,n=365;
	
	cout<<"Enter the probability : ";
	cin>>p;
	
	while(prob>1-p){
		prob*= n/365;
		n--;
		//cout<<"with"<<count<<"people"<<prob<<endl;
		count++;
	}
	
	cout<<"People in room : "<<count;
	
	return 0;
}
