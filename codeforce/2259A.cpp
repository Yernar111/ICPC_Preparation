#include <iostream>
#include <string>
using namespace std;
/* Тег два указателя */
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i=0,j=0,t=0;
    bool check=true;
    while (i<n){
        if (s[i]=='0'){
            check=false;
        }
        if (j==k-1){
            if (check) t++;
            else check=true;
            j=0;
        }
        else j++;
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