#include <iostream>
using namespace std;

bool isPrime(int x){
    if(x<2){
        return false;
    }
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<(isPrime(n + 1) ? "YES\n":"NO\n");
    }
    return 0;
}