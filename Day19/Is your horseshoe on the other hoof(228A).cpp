#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int>v(4);
    unordered_set<int>s;
    for(int i=0;i<4;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    cout<<4-s.size()<<endl;
    return 0;
    
}
