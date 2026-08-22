#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s, ans;

        for(int i=0;i<8;i++){
            cin>>s;
            for(char c:s){
                if(c!='.'){
                    ans += c;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
