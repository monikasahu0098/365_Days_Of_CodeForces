#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);

        bool ok=false;

        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==100) ok=true;
        }

        if(ok) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
