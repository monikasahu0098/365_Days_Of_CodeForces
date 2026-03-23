#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int>v(4);
        v[0]=a;
        v[1]=b;
        v[2]=c;
        v[3]=d;
        
        int m1=INT_MIN;
        int m2=INT_MIN;
        for(int i=0;i<4;i++){
            if(v[i]>m1){
                m2=m1;
                m1=v[i];
            }else if(m1 != m2 && v[i]>m2){
                m2=v[i];
            }
        }
        int first=max(v[0],v[1]);
        int sec=max(v[2],v[3]);
        
        if(first <m2 || sec <m2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
    
}