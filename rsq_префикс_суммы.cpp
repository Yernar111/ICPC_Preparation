#include <iostream>
using namespace std;
/* Static RSQ */
/* Создаем массив префиксных сумм для подсчета суммы элементов на отрезке за O(1) */
int main(){
    int n,left,right;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (i==0){
            b[i]==a[i];
            continue;
        }
        b[i]=b[i-1]+a[i];
    }
    int q; cin>>q;
    while(q--){
        cin>>left>>right;
        if(left==0){
            cout<<b[right];
        }
        else{
            cout<<b[right]-b[left-1];
        }
    }

    return 0;
}