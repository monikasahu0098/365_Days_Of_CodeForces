#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxZ=0;
        int count=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                count++;
                maxZ=max(maxZ,count);
            }else{
                count=0;
            }
        }
        cout<<maxZ<<endl;
    }
    return 0;
}
