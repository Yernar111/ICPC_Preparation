#include <iostream>
#include <algorithm>
using namespace std;
void solve(){
    int n,k,m=0;
    cin>>n;
    int b[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>k;
        b[k]++;
    }
    for(int i=0;i<=n;i++){
        if (b[i]==0 && i!=0){
            continue;
        }
        if (b[i]<i){
            m+=b[i];
        }
        else{
            m+=(b[i]-i);
        }
    }
    cout<<m;
    
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