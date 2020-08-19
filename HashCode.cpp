#include<iostream>
using namespace std;

int main(){
	
	int B,L,D;
	int score[B], N[L],T[L],M[L],books[L][B];
	
	cin>>B>>L>>D;
	
	for(int i=0;i<B;i++)
	cin>>score[i];
	
	for(int j=0;j<L;j++){
		
		cin>>N[j]>>T[j]>>M[j];
		
		for(int k=0;k<N[j];k++)
		cin>>books[j][k];
	}
	
	
}
