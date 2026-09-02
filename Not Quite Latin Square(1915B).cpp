#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        string s[3];
        for(int i=0;i<3;i++)
            cin>>s[i];

        for(int i=0;i<3;i++){
            if(s[i].find('?') !=string::npos){
                for(char c:string("ABC")){
                    if(s[i].find(c)==string::npos){
                        cout<<c<<endl;
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}