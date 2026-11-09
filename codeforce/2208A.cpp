#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n][n];
    int b[10001]={0};
    bool check=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[a[i][j]]++;
            if (b[a[i][j]]>n*n-n){
                check=false;
            }
        }
    }
    if (check){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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