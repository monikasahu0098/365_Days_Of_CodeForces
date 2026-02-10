#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>result;
        for(int i=1;result.size()<k;i++){
            int rem=i%10;
            if(rem==3 || i%3==0){
                continue;
            }else{
                result.push_back(i);
            }
        }
        cout<<result[k-1]<<endl;
    }
    return 0;
}
