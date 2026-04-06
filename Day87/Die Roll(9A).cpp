#include <iostream>
#include <algorithm>
using namespace std;


int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int Y, W;
    cin >> Y >> W;

    int mx = max(Y, W);

    int favorable = 6 - mx + 1;
    int total = 6;

    int g = gcd(favorable, total);

    cout << favorable / g << "/" << total / g;

    return 0;
}
