#include<iostream>
using namespace std;

int main(){
	
	int arr[10],n,cumSum[10]={0};
	int currentSum=0,maxSum=0,left=-1,right=-1;
	
	cout<<"Enter number of elements(max. 10)";
	cin>>n;
	
	cin>>arr[0];
	cumSum[0]=arr[0];
	for(int i=1;i<n;i++){
		cin>>arr[i];
		cumSum[i]=cumSum[i-1]+arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			currentSum=0;
			currentSum=cumSum[j]-cumSum[i-1];
			if(currentSum>maxSum){
				maxSum=currentSum;
				right=j;
				left=i;
			}
		}
	}
	
	cout<<"Max Sum = "<<maxSum<<endl;
	for(int k=left;k<=right;k++){
		cout<<arr[k]<<",";
	}
}
