#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;
        int x=min(a, b);
        int y=max(a, b);
        int side=max(y,2*x);

        cout<<side*side<<endl;
    }

    return 0;
}