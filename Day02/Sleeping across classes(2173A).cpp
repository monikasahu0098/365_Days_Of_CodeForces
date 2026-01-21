#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<bool> awake(n, false);
        
        // First pass: mark important classes as awake
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                awake[i] = true;
            }
        }
        
        // Second pass: for each important class, mark next k as awake
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                for (int j = i + 1; j <= i + k && j < n; j++) {
                    awake[j] = true;
                }
            }
        }
        
        // Count sleep classes (s[i]=='0' and not awake)
        int sleepCount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0' && !awake[i]) {
                sleepCount++;
            }
        }
        
        cout << sleepCount << endl;
    }
    return 0;
}
