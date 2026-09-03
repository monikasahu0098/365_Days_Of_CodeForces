#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<int>a(n);
        unordered_map<int,int>freq;

        long long sum=0;

        for(int &x:a){
            cin>>x;
            sum+=x;
            freq[x]++;
        }
        int mx=0, val=0;

        for(auto &[x,f]:freq){
            if(f>mx){
                mx=f;
                val=x;
            }
        }

        int other=n-mx;
        int usable=other+2;

        if(mx>usable)
            sum -= 1LL*(mx-usable)*val;

        cout<<sum<<endl;
    }

    return 0;
}
