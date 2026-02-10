#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s="codeforces";
        char c;
        cin>>c;
        
        bool isFound=false;
        for(int i=0;i<s.size();i++){
            if(c==s[i]){
                isFound=true;
                break;
            }
        }
        if(isFound){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
