#include <iostream>
using namespace std;
/* Тег математика */
int q,n,r;
void solve(){
    cin>>n>>r;
    r*=2;
    int k=0,t=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        k+=(a[i]/2)*2;
        t+=a[i]%2;
    }
    r-=k;
    if(t*2>=r){
        cout<<k+r-t;
    }
    else{
        cout<<k+t;
    }

    cout<<"\n";
}

int main(){
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}