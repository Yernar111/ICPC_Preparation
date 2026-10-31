#include <iostream>
#include <string>
using namespace std;
/* Тег два указателя */
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i=0,j=-1e9,t=0;
    while (i<n){
        if (s[i]=='1' && i-j>=k){
            t++;
        }
        if(s[i]=='1'){
            j=i;
        }
        i++;
    }
    cout<<t<<"\n";
}

int main(){
    int q;
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}