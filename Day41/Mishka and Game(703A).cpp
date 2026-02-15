#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int x;
    int y;
    int m=0;
    int c=0;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        if(x>y){
            m++;
        }else if(y>x){
            c++;
        }
    }
    if(m>c){
        cout<<"Mishka"<<endl;
    }else if(c>m){
        cout<<"Chris"<<endl;
    }else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    
    return 0;
}
