//strtok//
//-----------------
//char *strtok(char *str , char *delimiters)
//
//Splits strings into tokens 
//A sequence of calls to this function to split str into tokens, which are sequences of 
//contiguous characyers seperated by any of the character that are part of delimiters.
//
//On first call, the function expects a C string as argument for str.
//In subsequents calls, the function expects a NULL pointer.
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	string str,delm; 
	char *ptr;
	cout<<"Enter string : ";
	getline(cin,str);
	
	cout<<"Enter the delimiters";
	getline(cin,delm);
	
	ptr = strtok(str," ");
	cout<<ptr;
//	while(ptr!=NULL){
//		cout<<ptr<<endl;
//		ptr=strtok(NULL,delm);
//	}
	
	return 0;
}
