#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int cntNeg=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            
            if(x==-1){
                cntNeg++;
            }
        }
        if(n%2 !=0){
            cout<<"NO"<<endl;
        }else if(cntNeg%2==(n/2)%2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
