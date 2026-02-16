#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    int T;
    cin>>T;
    
    while(T--){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(mp[v[i]]==1){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
    
}
