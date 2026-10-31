#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        m+=a[i];
    }
    sort(a,a+n);
    if (a[n-1]==1 || a[n-2]==1){
        cout<<-1;
    }
    else{
        cout<<m-1;
    }

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