#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    
    if(s1.length()+s2.length() != s3.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    int arr[26]={0};
    for(char c:s1){
        arr[c-'A']++;
    }
    for(char c:s2){
        arr[c-'A']++;
    }
    for(char c:s3){
        arr[c-'A']--;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
