#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        string ans="";
        for(int i=0;i<s.size();i=i+2){
            ans=ans+s[i];
        }
        ans+=s[s.size()-1];
        
        cout<<ans<<endl;
    }
    return 0;
    
}
