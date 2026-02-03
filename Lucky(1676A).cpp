#include <iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int first3Sum=0;
        int last3Sum=0;
        for(int i=0;i<3;i++){
            first3Sum+=(s[i]-'0');
        }
        for(int i=3;i<6;i++){
            last3Sum+=(s[i]-'0');
        }
        
        if(first3Sum==last3Sum){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}