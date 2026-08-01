#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int>p,m,s;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        
        if(n==1){
            p.push_back(i+1);
        }else if(n==2){
            m.push_back(i+1);
        }else{
            s.push_back(i+1);
        }
    }
    
    int teams=min({p.size(),m.size(),s.size()});
    cout<<teams<<endl;
    for(int i=0;i<teams;i++) {
        cout<< p[i] << " " << m[i] << " " << s[i] << endl;
    }

    return 0;
}