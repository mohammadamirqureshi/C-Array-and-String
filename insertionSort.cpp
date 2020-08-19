#include<iostream>
using namespace std;

int main(){
	
	int n,arr[n],num;
	
	cout<<"Enter the size of the array : ";
	cin>>n;
	cout<<"Enter the array : ";
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=1;i<n;i++){
		
		int num=arr[i];
		int j=i-1;
		
		while(j>=0&&arr[j]>num){
			arr[j+1]=arr[j];
			j--;
		}
		
		arr[j+1]=num;
	}
	
	cout<<"Array after sorting : ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"-";
	
	
	return 0;
}
