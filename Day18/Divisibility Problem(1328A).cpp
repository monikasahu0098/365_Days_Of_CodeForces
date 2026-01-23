#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long ans=0;
        if(a%b==0){
            cout<<0<<endl;
        }else{
            cout<<b-(a%b)<<endl;
        }
    }
    return 0;
}
