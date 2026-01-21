#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> giver(n + 1);   // giver[i] = who gave gift to i
    vector<int> p(n + 1);

    for(int i = 1; i <= n; i++){
        cin >> p[i];            // i gave gift to p[i]
        giver[p[i]] = i;        // store inverse
    }

    for(int i = 1; i <= n; i++){
        cout << giver[i] << " ";
    }

    return 0;
}
