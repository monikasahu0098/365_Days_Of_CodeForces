#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    int countBills=0;
    
    int arr[]={100,20,20,5,1};
    for(int i:arr){
        countBills+=(n/i);
        n=n%i;
    }
    
    cout<<countBills<<endl;
    return 0;
    
}