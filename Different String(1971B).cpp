#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        string r=s;
        sort(r.begin(),r.end());
        
        if(r!=s){
            cout<<"YES"<<endl;
            cout<<r<<endl;
        }else{
            reverse(r.begin(),r.end());
            if(r!=s){
                cout<<"YES"<<endl;
                cout<<r<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        
    }
    return 0;
}