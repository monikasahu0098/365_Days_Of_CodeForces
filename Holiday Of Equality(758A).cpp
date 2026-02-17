#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int maxi=vec[n-1];
    
    int count=0;
    for(int i=0;i<n-1;i++){
        count+=(maxi-vec[i]);
    }
    cout<<count<<endl;
    return 0;
    
}
