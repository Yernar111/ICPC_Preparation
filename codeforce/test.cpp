#include <iostream>
using namespace std;

int a[100];
int n,q;
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
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