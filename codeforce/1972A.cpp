#include <iostream>
#include <vector>
using namespace std;
/* Тег два указателя */
void solve(){
    int n,k;
    cin>>n;
    vector <int> a;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>k;
        a.push_back(k);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int i=0,t=0;
    while(i<n){
        if (a[i]>b[i]){
            a.insert(a.begin()+i, b[i]);
            a.pop_back();
            t++;
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