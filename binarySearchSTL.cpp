#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[]={10,20,30,40,40,40,50,100,120};
    int key, n= sizeof(arr)/sizeof(int);

    cin>>key;

    bool it = binary_search(arr,arr+n,key);

    if(it) cout<<key<<" Present"<<endl;
    else cout<<key<<" Absent"<<endl;

    auto ub=upper_bound(arr,arr+n,40);
    cout<<"Upper bound of 40 is "<<(ub-arr)<<endl;

    auto lb=lower_bound(arr,arr+n,40);
    cout<<"Loer bound of 40 is "<<(lb-arr)<<endl;

    cout<<"Occurence frequency of 40 is "<<(ub-lb);

    return 0;
}
