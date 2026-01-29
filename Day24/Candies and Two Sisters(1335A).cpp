#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        long long ans=(n-1)/2;
        if(ans<0){
            cout<<0<<endl;
        }
        cout<<ans<<endl;

    }
    return 0;
}

