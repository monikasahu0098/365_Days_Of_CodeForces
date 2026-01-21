#include <iostream>
using namespace std;

int main(){
    int k,n,w;  //k=cost of first banana //n=dollar he has// w=total banana he want
    cin>>k>>n>>w;
    int total_cost=0;
    
    int i=1;
    while(w--){
        total_cost+=(k*i);
        i++;
    }
    
    if(total_cost<n){
        cout<<0<<endl;
    }else{
        cout<<total_cost-n<<endl;
    }
    return 0;
}
