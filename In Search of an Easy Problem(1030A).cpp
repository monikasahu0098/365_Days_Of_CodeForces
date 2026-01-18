#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    string ans="EASY";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        
        if(x==1){
            ans="HARD";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}