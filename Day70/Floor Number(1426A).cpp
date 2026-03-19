#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        if(n<=2){
            cout<<1<<endl;
        }else{
            int num=n-2;
            int val=(num+(x-1))/x;
            cout<<val+1<<endl;
        }
    }
    return 0;
}
