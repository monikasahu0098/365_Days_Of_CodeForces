#include <iostream>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int l, a, b;
        cin >> l >> a >> b;
        int g = gcd(b, l);
        int maxPrize = l - 1 - (l - 1 - a) % g;
        cout << maxPrize << endl;
    }
    return 0;
}

