#include <iostream>
#include <string>
#include<climits>
#include <algorithm>
using namespace std;

bool allDistinct(int n){
    string s=to_string(n);
    sort(begin(s),end(s));
    
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int y;
    cin>>y;
    
    do{
        y=y+1;
        if(allDistinct(y)){
            cout<<y<<endl;
            break;
        }
    }while(true);
    return 0;
    
}