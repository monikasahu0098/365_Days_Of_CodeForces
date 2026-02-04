#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    int ans = 0;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        ans += mp[s];
    }

    cout << ans << endl;
    return 0;
}

