#include <iostream>
#include <algorithm>
using namespace std;
/* Тег сортировки */
void solve(){
    int n,k,m=0;
    bool check=true;
    cin>>n>>k;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if (check && a[i]-b[i]>=0){
            m+=(a[i]-b[i]);
        }
        else{
            m=0;
            check=false;
        }
    }
    if (check){
        cout<<m<<"\n";
        return;
    }
    sort(a, a+n);
    sort(b, b+n);
    for(int i=0;i<n;i++){
        if (a[i]-b[i]>=0){
            m+=(a[i]-b[i]);
        }
        else{
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<m+k<<"\n";
}
 
int main(){
    int q;
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}