#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum += v[i];
        }
        
        long long root=sqrt(sum);
        if(root*root==sum){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}