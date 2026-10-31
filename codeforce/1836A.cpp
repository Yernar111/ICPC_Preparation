#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n],b[101]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }

    for(int i=1;i<101;i++){
        if (b[i]>b[i-1]){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
}

int main(){
    int q;
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}