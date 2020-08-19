#include<iostream>
using namespace std;

int fact(int x){
	int fac=1;
	
	for(int i=1;i<=x;i++){
		fac=fac*i;
	}
	
	return fac;
}

int main(){
	
	int N=0,NF=0,count=0,ans=1;
	int a[6];
	
	cin>>N;
	for(int i=0;i<6;i++){
		cin>>a[i];
	}
	
	NF=fact(N);
	
	for(int i=0;i<6;i++){
		
		for(int j=N;j>a[i];j--){
			count=count+ (NF/(fact(j)*fact(N-j)));
		}
	}
	
	for(int i=1;i<=N;i++){
		ans=6*ans;
	}
	ans=ans-count;
	cout<<ans;
	return 0;
}


//  WRONG LOGIC------------------------------
//	
//	for(int i=0;i<6;i++)
//	{
//		RF[i]=fact(a[i]);
//	}
//	
//	for(int i=0;i<6;i++){
//		NRF[i]=fact(N-a[i]);
//	}
//	
//	for(int i=0;i<6;i++){
//		count =count+ (fN/(RF[i]*NRF[i]));
//	}
