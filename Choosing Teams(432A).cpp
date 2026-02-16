#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int countE=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<=5-k){
            countE++;
        }
    }
    cout<<(countE/3)<<endl;
    return 0;
}