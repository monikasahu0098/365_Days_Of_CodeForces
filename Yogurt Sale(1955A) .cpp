#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int normal = n * a;
        int promotion = (n / 2) * b + (n % 2) * a;

        cout << min(normal, promotion) << endl;
    }
    return 0;
}