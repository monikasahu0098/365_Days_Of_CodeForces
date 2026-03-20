#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        count+=(n/4);
        int rem=n%4;
        if(rem != 0){
            count+=(rem/2);
        }
        
        cout<<count<<endl;
    }
    return 0;
}
