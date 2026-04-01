#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int i=0;
        int j=s.length()-1;
        
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='p'){
                s[i]='q';
            }else if(s[i]=='q'){
                s[i]='p';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}