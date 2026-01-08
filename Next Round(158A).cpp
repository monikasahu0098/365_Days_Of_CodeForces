#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int limit=v[k-1];
    
    for(int num:v){
        if(num>=limit && num>0){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;
}