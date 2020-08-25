#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool myCompare(pair<string, int> e1, pair<string, int> e2){
	
	if(e1.second == e2.second ) return e1.first < e2.first;
	
	return e1.second > e2.second;
}

int main(){
	
	int minSalary,n;
	
	cout<<"Enter number of employees : ";
	cin>>n;
	
	pair<string, int> emp[n];
	
	cout<<"Enter name and salary : ";
	
	string name; int salary;
	for(int i=0;i<n;i++){
		
		cin>>name>>salary;
		
		emp[i].first=name;
		emp[i].second=salary;
	}
	
	sort(emp, emp+n, myCompare);
	
	for(int i=0;i<n;i++){
		cout<<emp[i].first<<"  "<<emp[i].second<<endl;
	}
	return 0;
}
