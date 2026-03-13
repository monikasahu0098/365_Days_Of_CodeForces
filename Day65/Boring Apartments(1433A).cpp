#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int last=x%10;
        int count=0;
        while(x>0){
            count++;
            x=x/10;
        }
        int ans=(last-1)*10 +(count*(count+1)/2);
        
        cout<<ans<<endl;
    }
    return 0;
}
