#include <iostream>
using namespace std;

void solve(){
    int n,t=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (i!=0 && a[i]<a[i-1]){
            t++;
        }
    }
    if (t==0){
        cout<<"Yes";
    }
    else if (t==1 && a[n-1]<=a[0]){
        cout<<"Yes";
    }
    else{
        cout<<"No";
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