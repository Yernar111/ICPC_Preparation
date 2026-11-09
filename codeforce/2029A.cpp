#include <iostream>
using namespace std;
int q,l,r,k;
void solve(){
    int t=0;
    cin>>l>>r>>k;
    
    cout<<max(0,r/k-l+1);

    cout<<"\n";
}

int main(){
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}