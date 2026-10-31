#include <iostream>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int a[n+1],b[k]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i%k]=max(b[i%k], a[i]);
    }
    long long t=0;
    for(int i=0;i<k;i++){
        t+=b[i];
    }
    cout<<t;

    cout<<"\n";
}

int main(){
    int q;
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}