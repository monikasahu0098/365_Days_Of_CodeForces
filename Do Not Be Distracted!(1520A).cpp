#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        set<char> seen;
        bool ok = true;
        
        seen.insert(s[0]);
        
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                if (seen.count(s[i])) {
                    ok = false;
                    break;
                }
                seen.insert(s[i]);
            }
        }
        
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}