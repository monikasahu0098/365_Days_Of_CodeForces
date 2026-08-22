#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long mn=LLONG_MAX;
        long long mx=LLONG_MIN;

        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        cout<<mx-mn<<endl;
    }

    return 0;
}
