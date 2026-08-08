#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(auto &x:a){
            cin>>x;
        }
        long long prev=0,carry=0;
        bool ok=true;

        for(int i=0;i<n;i++){
            long long cur=a[i]+carry;
            long long need=prev+1;

            if(cur<need){
                ok=false;
                break;
            }

            if(i<n-1){
                carry=cur-need;
                prev=need;
            }else{
                if(cur<=prev) ok=false;
            }
        }

        cout<<(ok?"YES":"NO")<<"\n";
    }
}