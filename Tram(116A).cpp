#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int currCapacity=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        currCapacity=currCapacity-a+b;
        ans=max(ans,currCapacity);
    }
    cout<<ans<<endl;
    return 0;
}