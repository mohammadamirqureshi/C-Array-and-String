#include<iostream>
using namespace std;

int main(){
	int arr[10],n,cs=0,ms=0;
	
	cout<<"Enter array length (max. 10)";
	cin>>n;
	

	
	for(int i=0;i<n;i++){
		
		cin>>arr[i];
		
		cs=cs+arr[i];
		if(cs<0){
			cs=0;
		}
		
		ms=max(cs,ms);
		
	}
	
	cout<<"MaxSum = "<<ms;
	
	return 0;
}
