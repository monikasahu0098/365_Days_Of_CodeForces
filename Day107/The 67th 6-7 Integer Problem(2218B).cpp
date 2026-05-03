#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        vector<int> a(7);
        int sum = 0;
        
        // Input and total sum
        for (int i = 0; i < 7; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        int maxSum = -1e9;
        
        // Try keeping each element positive
        for (int i = 0; i < 7; i++) {
            int current = 2 * a[i] - sum;
            maxSum = max(maxSum, current);
        }
        
        cout << maxSum << endl;
    }
    
    return 0;
}
