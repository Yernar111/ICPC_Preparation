#include <iostream>
#include <algorithm>
using namespace std;
/* Тег два указателя */
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a, a + n);

    int i=1,j=n-1;
    long long k=a[0],m=a[j];

    while (i<j){
        k+=a[i];
        if (k<m){
            cout<<"YES\n";
            return;
        }
        else{
            j--;
            m+=a[j];
            i++;
        }
    }
    cout<<"NO\n";
    
}

int main(){
    int q;
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}