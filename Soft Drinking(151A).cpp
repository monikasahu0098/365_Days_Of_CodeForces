#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int totalDrink=k*l;
    int softToast=totalDrink/nl;
    
    int limesToast=c*d;
    
    int saltToast=p/np;
    
    int ans=min(softToast,min(limesToast,saltToast));
    cout<<ans/n<<endl;
    return 0;
}
