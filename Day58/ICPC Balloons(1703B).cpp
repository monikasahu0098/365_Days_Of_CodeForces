#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        unordered_set<char>st;
        for(char ch:s){
            if(st.find(ch)==st.end()){
                count+=2;
            }else{
                count+=1;
            }
            st.insert(ch);
        }
        cout<<count<<endl;
    }
    return 0;
}
