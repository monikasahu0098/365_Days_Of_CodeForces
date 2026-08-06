#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,se=0,so=0;
        cin>>n;
        while(n--){
            cin>>x;
            if(x&1){
                so+=x;
            }else{
                se+=x;
            }
        }
        cout<<(se>so?"YES":"NO")<<endl;
    }
    return 0;
}