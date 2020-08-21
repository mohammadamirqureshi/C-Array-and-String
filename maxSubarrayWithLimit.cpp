#include<iostream>
using namespace std;

int main(){
	int arr[10],n,cs=0,ms=0,count=0;
	
	cout<<"Enter array length (max. 10)";
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	cin>>k;
	
	for(int i=0;i<n;i++){

		cs=cs+arr[i]; count++;
		if(cs<0){
			cs=0;
			count=0;
		}
		
		if(count>k){
			ms=max(cs,ms);
		}
	}
	
	cout<<"MaxSum = "<<ms;
	
	return 0;
}
