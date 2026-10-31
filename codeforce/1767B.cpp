#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void solve(){
    long long n,m;
    long long k;
    cin>>n;
    set <long long> a;
    cin>>k;
    for(int i=1;i<n;i++){
        cin>>m;
        a.insert(m);
    }
    for(long long i:a){
        if (i>k) k+=(i-k+1)/2;
    }
    cout<<k;

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