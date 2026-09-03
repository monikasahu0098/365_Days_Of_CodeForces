#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int h=(s[0]-'0')*10+(s[1]-'0');
        string period=(h<12) ? "AM":"PM";

        if(h==0){
            h = 12;
        }else if(h>12){
            h -= 12;
        }
        if(h<10){
            cout<<'0';
        }
        cout<<h<<s.substr(2)<<" "<<period<<endl;
    }

    return 0;
}
