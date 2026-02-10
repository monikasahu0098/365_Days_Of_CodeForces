#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v(4);
        for(int i=0;i<4;i++){
            cin>>v[i];
        }
        
        int timur=v[0];
        int count=0;
        for(int i=1;i<4;i++){
            if(v[i]>timur){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}