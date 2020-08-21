#include<iostream>
using namespace std;

int main(){
	
	int n,pivot=-1;
	
	cout<<"Enter array size : ";
	cin>>n;
	
	int arr[n];
	int beg=0,end=n-1,mid; 
	
	cout<<"Enter array : ";
	for(int i=0;i<n;i++) cin>>arr[i];
	
	while(beg<=end){
		
		mid=(beg+end)/2;
		
		if(arr[mid]<arr[mid-1]) {
			pivot=mid-1;
		break;
		}
		
		
		else if(arr[mid]>arr[mid+1]){
			pivot=mid;
		break;
		}
		
		
		else if(arr[beg]>arr[mid])
		end=mid-1;
		
		else if(arr[end]<arr[mid])
		beg=mid+1;
	}
	
	cout<<"Pivot Elememnt or the highest element in the array is "<<arr[pivot];
	
	
	return 0;
}
