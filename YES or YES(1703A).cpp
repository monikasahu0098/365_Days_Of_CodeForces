#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string newStr="";
        for(char ch:s){
            newStr+=tolower((unsigned char)ch);
        }
        if(newStr=="yes"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}