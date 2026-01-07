#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    while(n--){
        string s;
        cin>>s;
        string result="";
        if(s.length()>10){
            result+=s[0];
            result+=to_string(s.length()-2);
            result+=s[s.length()-1];
        }else{
            result+=s;
        }
        cout<<result<<endl;
    }
    return 0;
}
