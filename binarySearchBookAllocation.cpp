#include<iostream>
using namespace std;

 
bool isValidConfig(int book[], int n, int m, int ans){
	
	int students=1;
	int currentPages=0;
	
	for(int i=0;i<n;i++){
		if((currentPages+book[i])>ans){
			currentPages=book[i];
			students+=1;
			if(students>m) return false;
			
		}
		else
		{
			currentPages+=book[i];
		}
	}
	return true;
}
 
int binarySearchBook(int book[], int n,int m){
	int totalPages=0;
	int s=0,e=0;
	
	for(int i=0;i<n;n++){
		totalPages+=book[i];
		s=max(s,book[i]);
	}
	
	e=totalPages;
	int finalAns=s;
	while(s<=e){
		int mid = (s+e)/2;
		
		if(isValidConfig(book,n,m,mid)){
			// True
			finalAns=mid;
			e=mid-1;
		}
		else
		{  //False
		  s=mid+1;
		}
	}
	
	return finalAns;
}
 
int main(){
int book[10],ans;
int n,m;

cout<<"Enter number of books(max. 10) and students : ";
cin>>n>>m;
cout<<"Enter books pages : ";
for(int i=0;i<n;i++)
cin>>book[i];	

ans=binarySearchBook(book,n,m);
cout<<"Max Number of pages a student would read : "<<ans<<endl;

return 0;	
}
