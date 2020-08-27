#include<iostream>
using namespace std;

float squareRoot(int n, int p){
	
	float ans;
	int end = n;
	int beg=0;
	int mid;
	
	while(beg<=end){
		
		mid=(beg+end)/2;
		
	if((mid*mid)==n) {
		ans=mid;
		break;
	}
	
	if((mid*mid)<n){
		ans=mid;
		beg=mid+1;
	}
	
	else end = mid-1;
	}
// Fraction part 

float inc=0.1;

for(int i=0;i<p;i++){
	
	while((ans*ans)<=n){
		ans=ans+inc;
	}
	ans=ans-inc;
	inc=inc/10;
}

return ans;

}

int main(){
	
	int n,p;
	
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"Enter the deciaml precision : ";
	cin>>p;
	
	cout<<"Square root of "<<n<<" = "<<squareRoot(n,p);
	
	return 0;
}
