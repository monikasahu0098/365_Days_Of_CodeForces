#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_set<int>s;
    
    int p;
    cin>>p;
    vector<int>p_levels(p);
    for(int i=0;i<p;i++){
        cin>>p_levels[i];
        s.insert(p_levels[i]);
    }
    
    int q;
    cin>>q;
    vector<int>q_levels(q);
    for(int i=0;i<q;i++){
        cin>>q_levels[i];
        s.insert(q_levels[i]);
    }
    
    if(s.size()==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    
    return 0;
    
    
}