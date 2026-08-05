#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans=2;
        long long mx=0;

        for(int x=2;x<=n;x++){
            int k=n/x;
            long long sum=1LL*x*k*(k+1)/2;
            if(sum>mx){
                mx=sum;
                ans=x;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
