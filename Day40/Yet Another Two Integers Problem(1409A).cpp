#include <iostream>
#include <climits>
#include<cctype>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        int ans=0;
        int diff=abs(a-b);
        int i=10;
        while(diff>0){
            ans=diff/i;
            int rem=(diff%10);
            if(rem>=1 && rem<=10){
                ans=ans+1;
            }
            diff=rem/i;
            i--;
        }
        cout<<ans<<endl;

    }
    return 0;
}
