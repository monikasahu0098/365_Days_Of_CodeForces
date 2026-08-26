#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        if(k==n-1){
            cout<<-1<<endl;
            continue;
        }

        int blocks=n-k;
        int z=(n+1)/2;
        int o=n/2;

        for(int i=1;i<=blocks;i++){
            if(i%2){
                if(i+2>blocks){
                    while(z--) cout<<'0';
                }else{
                    cout<<'0';
                    z--;
                }
            }else{
                if(i+2>blocks){
                    while(o--) cout<<'1';
                }else{
                    cout<<'1';
                    o--;
                }
            }
        }

        cout<<endl;
    }

    return 0;
}