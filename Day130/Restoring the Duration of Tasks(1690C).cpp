#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>s(n);
        vector<long long>f(n);
        vector<long long>d(n);

        for(auto &x:s){
            cin>>x;
        }
        for(auto &x:f){
            cin>>x;
        }
        d[0]=f[0]-s[0];

        for(int i=1;i<n;i++){
            d[i]=f[i]-max(f[i-1],s[i]);
        }
        for(int i=0;i<n;i++)
            cout<<d[i]<<(i+1==n? '\n':' ');
    }
    return 0;
}
