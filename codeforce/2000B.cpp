#include <iostream>
using namespace std;
/* Тег два указателя */
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=1;
    while (i!=j && j<n){
        if (abs(a[i]-a[j])==1){
            j++;
        }
        else if (abs(a[j-1]-a[j])==1){
            j++;
        }
        else{
            i++;
        }
    }
    if (j==n) cout<<"YES";
    else cout<<"NO";
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