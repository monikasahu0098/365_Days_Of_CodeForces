#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int cntOdd=0;
        int cnt0=0;
        int cnt2=0;

        for(int i=0;i<n;i++){
            long long x;
            cin>>x;

            if(x%2==1){
                cntOdd++;
            }else if(x%4==0){
                cnt0++;
            }else{
                cnt2++;
            }
        }
        cout<<max({cntOdd, cnt0, cnt2})<<endl;
    }
    return 0;
}
