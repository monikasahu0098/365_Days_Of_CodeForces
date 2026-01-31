#include <iostream>

#include <algorithm>
using namespace std;

int main(){
    long long arr[4];
    
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+4);
    long long sum=arr[3];
    
    long long a=sum-arr[0];
    long long b=sum-arr[1];
    long long c=sum-arr[2];
    
    
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
