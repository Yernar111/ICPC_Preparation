#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+2*n);
    int t=0;
    for(int i=1;i<2*n;i+=2){
        t+=min(a[i],a[i-1]);
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