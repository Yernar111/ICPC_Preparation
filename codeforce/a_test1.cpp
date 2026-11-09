#include <iostream>
using namespace std;
int q,n,m;
void solve(){
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int k=0;
    for(int i=1;i<n;i++){
        if (abs(a[i]-a[i-1])+abs(b[i]-b[i-1])>abs(b[i]-a[i-1])+abs(a[i]-b[i-1])){
            int t=a[i];
            a[i]=b[i];
            b[i]=t;
            k+=abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
        }
    }
    cout<<k;
    
    

    cout<<"\n";
}

int main(){
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}