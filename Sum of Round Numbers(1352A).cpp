#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>result;
        int k=0;
        int place=1;
        while(n>0){
            int digit=n%10;
            if(digit != 0){
                k=k+1;
                int _round=digit*place;
                
                result.push_back(_round);
            }
            place*=10;
            n=n/10;
        }
        cout<<k<<endl;
        for(int num:result){
            cout<<num<<" ";
        }
    }
    return 0;
}