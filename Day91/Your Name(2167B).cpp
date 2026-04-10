#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        
        string s,t;
        cin>>s>>t;
        
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(char ch:t){
            mp[ch]--;
        }
        bool isAnagram=true;
        for(auto &p:mp){
            if(p.second != 0){
                isAnagram=false;
                break;
            }
        }
        if(isAnagram){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
