#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=n+1; ;i++){
        if(isPrime(i)){
            if(i==m){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            break;
        }
    }
    return 0;
    
}
