#include<iostream>
using namespace std;

int main(){
	
	int n,num,lb=-1,ub=-1;
	
	cout<<"Enter array size : ";
	cin>>n;
	
	int arr[n];
	int beg=0,end=n-1,mid;
	
	cout<<"Enter array : ";
	for(int i=0;i<n;i++) cin>>arr[i];
	
	cout<<"Enter the number : ";
	cin>>num;
	
	// Lower bound - first occurence
	while(beg<=end){
		
		mid=(beg+end)/2;
		
		if(arr[mid]==num){
			lb=mid;
			end=mid-1;
		}
		
		else if(arr[mid]>num){
			end=mid-1;
		}
		
		else beg=mid+1;
		
	}
	
	// Upper bound - last occurence
	
	beg=0,end=n-1;
		while(beg<=end){
		
		mid=(beg+end)/2;
		
		if(arr[mid]==num){
			ub=mid;
			beg=mid+1;
		}
		
		else if(arr[mid]>num){
			end=mid-1;
		}
		
		else beg=mid+1;
		
	}

	
	cout<<"Lower bound of : "<<num<<" is at index "<<lb<<endl;
	cout<<"Upper bound of : "<<num<<" is at index "<<ub<<endl;
	return 0;
}
