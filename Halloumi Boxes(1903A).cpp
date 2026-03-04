#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        if(k==1){
            if(is_sorted(v.begin(),v.end())){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}