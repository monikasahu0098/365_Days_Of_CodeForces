#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        vector<int>v(3);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        
        if(v[0]==v[1]){
            cout<<v[2]<<endl;
        }else if(v[0]==v[2]){
            cout<<v[1]<<endl;
        }else{
            cout<<v[0]<<endl;
        }
        
        
    }
    return 0;
}
