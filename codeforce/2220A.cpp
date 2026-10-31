#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    set <int> b;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b.insert(a[i]);
    }
    if (n!=b.size()){
        cout<<-1;
    }
    else{
        sort(a, a+n, greater<int>());
        for(int i : a){
            cout<<i<<" ";
        }
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