#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int a;
    cin>>a;
    int lucky=0;
    
    while(a>0){
        int rem=a%10;
        if(rem==7 || rem==4){
            lucky++;
        }
        a=a/10;
    }
    if(lucky==7 || lucky==4){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
