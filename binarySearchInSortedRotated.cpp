//  The program is correct 
//    to verify check on online IDE
//

#include<iostream>
using namespace std;

int search(int arr[], int beg, int end, int key){
	
	int mid;
	
	if(beg>end) return -1;
	
	while(beg<=end){
		
		mid=(beg+end)/2;
		
		if(arr[mid]==key) {
			return mid;
		}
		
		else if(arr[mid]<arr[end]){
			if(arr[mid]<key&&key<=arr[end])
			return  search(arr,mid+1,end,key);
				
				else 
				return search(arr,beg,mid-1,key);

		}
		
		else{
			if(arr[beg]<=key&&key<arr[mid])
			return search(arr,beg,mid-1,key);
			
			else
			return search(arr,mid+1,end,key);
		}
		
	}
}

int main(){
	
	int n,arr[n],key,ans;
	
	cout<<"Enter the array size : ";
	cin>>n;
	
	cout<<"Enter the array : ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"Enter the element to be searched : ";
	cin>>key;
	
   ans=search(arr,0,n-1,key);
	
	if(ans!=-1)
	cout<<"The searched number "<<key<<" is present at index "<<ans;
	
	else
	cout<<"The searched element "<<key<<" is not present";
	
	
	return 0;
}
