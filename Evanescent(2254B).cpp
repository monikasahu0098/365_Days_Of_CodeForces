#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        string s;
        cin>>n>>s;

        int runs=1;

        for(int i=1;i<n;i++){
            if(s[i] !=s[i-1]){
                runs++;
            }
        }

        int ans=runs;

        for(int i=1;i<n-1;i++){
            if(s[i-1]==s[i+1]&&s[i]!=s[i-1]){
                ans=min(ans,runs-2);
            }
            else if(s[i-1]!=s[i]&&s[i]!=s[i+1]){
                ans=min(ans,runs-1);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}