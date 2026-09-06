#include <bits/stdc++.h>
using namespace std;

bool possible(vector<long long>& a,vector<long long>& b){
    int n=a.size();
    int m=b.size();

    if(n<2*m){
        return false;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<m;i++){
        if(a[i]>=b[i]){
            return false;
        }
    }
    int j=m;

    for(int i=0;i<m;i++){
        while(j<n && a[j]<=b[i]){
            j++;
        }
        if(j==n){
            return false;
        }
        j++;
    }
    return true;
}

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<long long>a(n),b(m);

        for(auto &x:a){
            cin>>x;
        }
        for(auto &x:b){
            cin>>x;
        }
        cout<<(possible(a,b) ? "YES":"NO")<<endl;
    }
    return 0;
}
