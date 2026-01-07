#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char>st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    int count=st.size();
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}