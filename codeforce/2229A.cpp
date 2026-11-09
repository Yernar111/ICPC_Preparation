#include <iostream>
using namespace std;

int n,q,m=1001,k=0;
void solve(){
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]<m){
            m=a[i];
        }
        if (a[i]>k){
            k=a[i];
        }
    }
    int t=(m+k)/2;
    cout<<max(abs(m-t), abs(k-t));
    

    cout<<"\n";
}

int main(){
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}