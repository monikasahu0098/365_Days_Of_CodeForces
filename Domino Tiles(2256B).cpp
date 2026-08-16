#include<bits/stdc++.h>
using namespace std;
const long long M=998244353;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;string s;cin>>n>>s;
        long long ans=1;
        for(int p=0;p<2;p++){
            int last=-1;
            for(int i=p;i<n;i+=2){
                if(s[i]!='?'){
                    int x=s[i]-'0';
                    if(last!=-1&&last==x) ans=0;
                    last=x;
                }else if(last!=-1) last^=1;
            }
            if(!ans) break;
            bool fixed=false;
            for(int i=p;i<n;i+=2)
                if(s[i]!='?'){fixed=true;break;}
            if(!fixed){
                int cnt=0;
                for(int i=p;i<n;i+=2) cnt++;
                ans=ans*2%M;
            }
        }
        cout<<ans<<"\n";
    }
}