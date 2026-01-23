#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set<char>letters;
    
    for(char c:s){
        letters.insert(tolower(c));
    }
    if(letters.size()==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
