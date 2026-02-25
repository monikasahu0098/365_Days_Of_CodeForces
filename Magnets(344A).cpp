#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long cnt=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            cnt++;
        }
    }
    cout<<cnt+1<<endl;
    return 0;
    
}
