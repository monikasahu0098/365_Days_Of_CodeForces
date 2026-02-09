#include <iostream>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=INT_MAX;
        for(int c=1;c<=10;c++){
            int sol=(c-a)+(b-c);
            ans=min(ans,sol);
        }
        cout<<ans<<endl;
    }
    return 0;
}
