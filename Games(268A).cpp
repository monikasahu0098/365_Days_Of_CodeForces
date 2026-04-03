#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> home(n), away(n);

    // Input
    for(int i = 0; i < n; i++) {
        cin >> home[i] >> away[i];
    }

    int count = 0;

    // Compare every pair
    for(int i = 0; i < n; i++) {          // host team
        for(int j = 0; j < n; j++) {      // guest team
            if(i != j && home[i] == away[j]) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}