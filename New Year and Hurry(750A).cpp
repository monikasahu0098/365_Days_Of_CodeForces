#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    int totalMinutes=60*4-k;
    int spendMinutes=0;
    int count=0;
    int i=5;
    for(int i=1;i<=n;i++){
        int needed=5*i;
        spendMinutes+=needed;
        if(spendMinutes<=totalMinutes){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
    
}