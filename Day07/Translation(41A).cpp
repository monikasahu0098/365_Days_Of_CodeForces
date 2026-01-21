#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    
    string rev="";
    for(int i=0;i<s.size();i++){
        rev=s[i]+rev;
    }
    if(rev==t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
