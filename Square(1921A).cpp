#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> x(4), y(4);

        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }

        int min_x = *min_element(x.begin(), x.end());
        int max_x = *max_element(x.begin(), x.end());
        int min_y = *min_element(y.begin(), y.end());
        int max_y = *max_element(y.begin(), y.end());

        int side = max_x - min_x; // or max_y - min_y
        cout << side * side << endl;
    }

    return 0;
}