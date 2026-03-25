#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        int cntA=0;
        int cntB=0;
        for(char ch:s){
            if(ch=='A'){
                cntA++;
            }else{
                cntB++;
            }
        }
        if(cntA>cntB){
            cout<<"A"<<endl;
        }else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}
