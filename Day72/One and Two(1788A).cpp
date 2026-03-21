#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int>a(n);

        int total_2=0;
        for (int i=0; i<n; i++) {
            cin>>a[i];
            if (a[i]==2) total_2++;
        }

        if (total_2%2!=0) {
            cout<<-1<<endl;
            continue;
        }
        int target=total_2/2;
        int count=0;
        for (int i=0; i<n; i++) {
            if(a[i]==2) count++;
            if(count == target) {
                cout <<i+1<< endl;
                break;
            }
        }
    }
    return 0;
}
