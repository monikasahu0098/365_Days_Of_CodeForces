#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=INT_MAX;
        int idx=-1;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<mini){
                mini=v[i];
                idx=i;
            }
        }
        v[idx]++;
        long long ans=1;
        for(int i=0;i<n;i++){
            ans*=v[i];
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
