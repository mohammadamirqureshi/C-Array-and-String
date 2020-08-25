#include<iostream>
using namespace std;

int maxRight(int arr[], int index){
	
	int max=arr[index],n=sizeof(arr);
	for(int i=index;i<n;i++){
		if(max>arr[i]) max=arr[i];
	}
	
	return max;
}

int maxLeft(int arr[], int index){
	
	int max=arr[index];
	for(int i=index;i>=0;i++){
		if(max>arr[i]) max=arr[i];
	}
	
	return max;
}

int main(){
	
	int n,arr[n],left[n],right[n],water[n],w;
	
	cout<<"Enter the number of buildings : ";
	cin>>n;
	cout<<"Enter building heights : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		left[i]=maxLeft(arr,i);
	}
	
	for(int i=n-1;i>=0;i--){
		right[i]=maxRight(arr,i);
	}
	
	for(int i=0;i<n;i++){
	water[i]= min(left[i],right[i])-arr[i];
	
	}
	
	cout<<endl;
	for(int i=0;i<n;i++){
	w=w+water[i];
	cout<<right[i];
	}
	
	cout<<"Maximum water stored : "<<w;
	
	return 0;
}
