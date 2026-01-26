#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    // Leftmost maximum
    int idxMax = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == mx) {
            idxMax = i;
            break;
        }
    }

    // Rightmost minimum
    int idxMin = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == mn) {
            idxMin = i;
            break;
        }
    }

    int swaps = idxMax + (n - 1 - idxMin);

    // Overlap case
    if (idxMax > idxMin) {
        swaps--;
    }

    cout << swaps << endl;
    return 0;
}




