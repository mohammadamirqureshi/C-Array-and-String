#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int n,arr[n],min,temp;
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=0;i<n;i++){
		
		min=i;
		
		for(int j=i+1;j<n;j++){
			
			if(arr[j]<arr[min])
			min=j;
		}
		
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	
	cout<<"Array after sorting is";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	
	return 0;
}