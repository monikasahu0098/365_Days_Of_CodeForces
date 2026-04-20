#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        
        vector<int> v = {x1, x2, x3};
        sort(v.begin(), v.end());
        
        int median = v[1];
        
        int result = abs(v[0] - median) + abs(v[1] - median) + abs(v[2] - median);
        
        cout << result << endl;
    }
    
    return 0;
}
