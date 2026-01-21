#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A_score=0;
    int D_score=0;
    string s;
    cin>>s;
    
    for(char ch:s){
        if(ch=='A'){
            A_score+=1;
        }else{
            D_score+=1;
        }
    }
    if(A_score>D_score){
        cout<<"Anton"<<endl;
    }else if(A_score<D_score){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    return 0;
    
}
