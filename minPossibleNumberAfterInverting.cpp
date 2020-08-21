#include<iostream>
using namespace std;

int main(){
	
	char arr[50];
	
	cout<<"Enter the number : ";
	cin>>arr;
	int i=0;
	if(arr[0]=='9') i++;
	
	for(;arr[i]!='\0';i++){
		int digit = arr[i]-'0';  // Converting char into integer digit
		
		if(digit>4) 
		{
		digit=9-digit;
		arr[i]= digit + '0';   // Converting int into char
	    }
	}
	
	cout<<"After inverting the minimum possible number is : "<<arr;
	
	return 0;
}
