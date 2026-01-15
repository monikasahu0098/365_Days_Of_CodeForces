#include <iostream>
#include<cctype>
#include <string>
using namespace std;



int main(){
    string s;
    cin>>s;
    
    int upperCase=0;
    int lowerCase=0;
    
    for(char ch:s){
        if(isupper(ch)){
            upperCase++;
        }else{
            lowerCase++;
        }
    }
    if(lowerCase>=upperCase){
        for(char &c:s){
            c=tolower(c);
        }
    }else{
        for(char &c:s){
            c=toupper(c);
        }
    }
    cout<<s<<endl;
    return 0;
}