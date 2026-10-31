#include <iostream>
#include <algorithm>
using namespace std;
/* Два указателя для получения массива без дубликатов за O(n) из исходного отсортированного массива */
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int i=1,j=1;
    while (i<n){
        if (a[i]!=a[i-1]){
            a[j]=a[i];
            j++;
        }
        i++;
    }
    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}