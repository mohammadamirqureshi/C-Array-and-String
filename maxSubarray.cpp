#include<iostream>
using namespace std;

int main(){
	
	int arr[10],n;
	int maxSum=0,currentSum=0,left=-1,right=-1;
	cout<<"Enter array length(max. 10)";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentSum=0;
			for(int k=i;k<=j;k++){
				currentSum+= arr[k];
			}
			if(currentSum>maxSum){
				maxSum=currentSum;
				left=i;
				right=j;
			}
		}
	}
	cout<<"Max Sum = "<<maxSum<<endl;
	for(int k=left;k<=right;k++){
		cout<<arr[k]<<",";
	}
}
