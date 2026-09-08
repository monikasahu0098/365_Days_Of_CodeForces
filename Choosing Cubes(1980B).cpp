#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,f,k;
        cin>>n>>f>>k;

        vector<int>a(n);
        for(int &x:a){
            cin>>x;
        }
        int fav=a[f-1];
        int greater=0;
        int equal=0;

        for(int x:a){
            if(x>fav){
                greater++;
            }else if(x==fav){
                equal++;
            }
        }
        if(greater>=k){
            cout<<"NO"<<endl;
        }else if(greater+equal<=k){
            cout<<"YES"<<endl;
        }else{
            cout<<"MAYBE"<<endl;
        }
    }
    return 0;
}