#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            count+=x;
        }else{
            if(count>0){
                count--;
            }else{
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
    
}

