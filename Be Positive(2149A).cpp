#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int neg=0;
        int zero=0;
        
        int ops=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            
            if(x==0){
                zero++;
            }else if(x==-1){
                neg++;
            }
        }
        if(neg%2!=0){
            ops+=2;
        }
        ops+=zero;
        cout<<ops<<endl;
    }
    return 0;
}