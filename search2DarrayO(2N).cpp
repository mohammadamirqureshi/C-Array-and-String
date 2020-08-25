#include<iostream>
using namespace std;

void search(int arr[][10], int r, int c, int key){
	int i=0,j=c-1;
	while(i<r&&j>=0){
		if(arr[i][j]==key) {
		cout<<"Element Found! at : {"<<i+1<<","<<j+1<<"}"; return;  }
		
		else if(arr[i][j]<key) i++;
		
		else j--;
	}
}

int main(){
	
	int arr[10][10];
	int r=0,c=0,key=0;
	cout<<"Enter number of rows and columns (max. 10 each)";
	cin>>r>>c;
	cout<<"Enter array row wise : ";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Enter Elment to be searched : ";
	cin>>key;
	search(arr,r,c,key);
	
	return 0;
}
