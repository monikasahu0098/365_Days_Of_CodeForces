#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        
        int maxi = max(a, max(b, c));
        int required = (maxi - a) + (maxi - b) + (maxi - c);
        
        if(required > n){
            cout << "NO\n";
        }
        else if((n - required) % 3 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
