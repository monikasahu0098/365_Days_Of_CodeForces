#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0.0;
    double p;

    for(int i = 0; i < n; i++) {
        cin >> p;
        sum += p;
    }

    double result = sum / n;

    // Print with high precision
    cout << fixed << setprecision(12) << result << endl;

    return 0;
}
