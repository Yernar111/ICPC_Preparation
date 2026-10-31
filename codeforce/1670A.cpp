#include <iostream>
using namespace std;

void solve(){
    int n,k=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]<0){
            a[i]=~a[i] + 1;
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if (a[i]>0 && k){
            a[i]=~a[i] + 1;
            k--;
        }
        if (i!=0 && a[i]<a[i-1]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES";

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