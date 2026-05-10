#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    char cur = 'a';
    int ans = 0;

    for (char c : s) {
        int d = abs(c - cur);
        ans += min(d, 26 - d);
        cur = c;
    }

    cout << ans;

    return 0;
}
