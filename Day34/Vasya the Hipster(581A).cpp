#include <iostream>
#include<climits>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    
    int ans1=min(a,b);
    int maxi=max(a,b);
    
    int rest=maxi-ans1;
    int ans2=rest/2;
    
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
    
}
