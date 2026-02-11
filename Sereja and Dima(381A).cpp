#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0;
    int j=n-1;
    
    int sereja=0;
    int dima=0;
    
    bool serejaTurn=true;
    while(i<=j){
        if(v[i]>v[j]){
            if(serejaTurn){
                sereja+=v[i];
            }else{
                dima+=v[i];
            }
            i++;
        }else{
            if(serejaTurn){
                sereja+=v[j];
            }else{
                dima+=v[j];
            }
            j--;
        }
        serejaTurn= !serejaTurn;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
    
}