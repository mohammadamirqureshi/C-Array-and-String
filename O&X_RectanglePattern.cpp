//   for N=5 
//
//    00000
//    0XXX0
//    0X0X0
//    0XXX0 
//    00000 
//

#include<iostream>
using namespace std;

int main(){
	
	char arr[10][10]={'/0'} ,ch='/0';
	int n;
	cout<<"Enter N (max. 10) : ";
	cin>>n;
	
	int startRow=0,startCol=0,endRow=n-1,endCol=n-1;
	
	while(startRow<=endRow&&startCol<=endCol){
	
	if(n%2){
	   ch='O';		
    }
	
	else {
		ch='X';
	}
	
		
		for(int j=startCol;j<=endCol;j++) arr[startRow][j]=ch;
		startRow++;
		
		for(int i=startRow;i<=endRow;i++) arr[i][endCol]=ch;
		endCol--;
		
		for(int j=endCol;j>=startCol;j--) arr[endRow][j]=ch;
		endRow--;
		
		for(int i=endRow;i>=startRow;i--) arr[i][startCol]=ch;
		startCol++;
		
		n++;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
