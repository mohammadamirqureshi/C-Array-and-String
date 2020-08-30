#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int arr[]={1,4,15,2,9}, key;
	int n= sizeof(arr)/sizeof(int);
	cout<<"Enter key : ";
	cin>>key;
	
	auto it = find(arr,arr+n,key);
	
	int index= it - arr;
	
	if(index==n){
		cout<<key<<" Not present";
	}
	
	else{
		cout<<key<<" is present at index : "<<index;
	}
	
	return 0;
	}
