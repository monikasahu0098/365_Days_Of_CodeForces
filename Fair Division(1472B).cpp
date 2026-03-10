#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ones = 0, twos = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 1) ones++;
            else twos++;
        }
        int total = ones + 2 * twos;
        if(total % 2 != 0){
            cout << "NO\n";
        }
        else if(ones == 0 && twos % 2 == 1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}