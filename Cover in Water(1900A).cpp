#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;

        int ans=0,cnt=0;
        bool has=false;

        for(char c:s){
            if(c=='.') cnt++;
            else{
                if(cnt>=3) has=true;
                cnt=0;
            }
        }
        if(cnt>=3) has=true;

        if(has) ans=2;
        else
            for(char c:s)
                if(c=='.') ans++;

        cout<<ans<<"\n";
    }
}