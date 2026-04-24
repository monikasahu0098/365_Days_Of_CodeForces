#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        // sort descending
        sort(a.begin(),a.end(),greater<int>());

        bitset<20001>dp;
        dp[0]=1;

        bool ok=true;

        for(int i=0;i<n;i++){
            if(dp[a[i]]){
                ok=false;
                break;
            }
            dp|=(dp<<a[i]);
        }

        if(!ok){
            cout<<"-1\n";
        }else{
            for(int x:a)cout<<x<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
