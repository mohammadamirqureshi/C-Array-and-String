#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the length of the array (max. 10)";
	cin>>n;
	int arr[10];
	for(int i=0; i<n; i++){
     cin>>arr[i];
	}
	
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			for(int k=i; k<=j; k++){
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}
	}
}
