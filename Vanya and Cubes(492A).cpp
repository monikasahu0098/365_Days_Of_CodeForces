#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    
    int height=0;
    while(true){
        int curr=(i*(i+1))/2;
        if(n>=curr){
            n=n-curr;
            i++;
            height++; 
        }else{
            break;
        }

    }
    cout<<height<<endl;
    return 0;
    
}