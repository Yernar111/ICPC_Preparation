#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* Тег два указателя */
void solve(){
    int n;
    cin>>n;
    int a[n];
    vector <int> b;
    vector <int> c;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]%2==1){
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int i=0,j=0,k=0;

    for(int k=0;k<n;k++){
        if (a[k]%2==1){
            a[k]=b[i];
            i++;
        }
        else{
            a[k]=c[j];
            j++;
        }

        if (k>0 && a[k]<a[k-1]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    
}

int main(){
    int q;
    cin>>q;
    while (q--){
        solve();
    }
    return 0;
}


/*
# best way

#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        if((a[i] % 2) != (b[i] % 2)) return false;
    }
    return true;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << (solve() ? "YES" : "NO") << "\n";
    }
    return 0;
}
*/