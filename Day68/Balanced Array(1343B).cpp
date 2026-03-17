#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        if(n%4 != 0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            int half=n/2;
            int sumEven=0;
            int sumOdd=0;
            vector<int>v;
            
            for(int i=1;i<=half;i++){
                int val=2*i;
                v.push_back(val);
                sumEven+=val;
            }
            for(int i=1;i<half;i++){
                int val=2*i-1;
                v.push_back(val);
                sumOdd+=val;
            }
            v.push_back(sumEven-sumOdd);
            for(int num:v){
                cout<<num<<" ";
            }
        }

    }
    return 0;
    
}
