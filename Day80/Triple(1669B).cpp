#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        unordered_map<int,int>mp;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        bool found=false;
        for(auto &p:mp){
            if(p.second>=3){
                found=true;
                cout<<p.first<<endl;
                break;
            }
        }
        if(!found){
            cout<<-1<<endl;
        }
    }
    return 0;
}
