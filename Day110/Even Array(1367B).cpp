#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, odd = 0, even = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if ((i % 2) != (x % 2)) {
                if (i % 2) odd++;
                else even++;
            }
        }

        if (odd != even) cout << -1 << '\n';
        else cout << odd << '\n';
    }

    return 0;
}
