#include <iostream>
using namespace std;
// Продвинутая версия задачи о двух принтерах
// Есть N станков, каждая из которой производит один товар за a[i] секунд. Нужно произвести K товаров за минимально возможное время учитывая что все станки работают одновременно
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int min_a = 1e9+1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        min_a=min(min_a, a[i]);
    }
    int l=0, r=min_a*k;
    while(l+1<r){
        int mid=(l+r)/2;
        int total=0;
        bool ok=false;
        for(int i=0;i<n;i++){
            total+=mid/a[i]; // Суммируем количество товаров которые могут быть произведены каждым станком за mid секунд
            if (total>=k){ // Если количество произведенных товаров не меньше K
                ok=true;
                break;
            }
        }
        if (ok){
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<r;

    return 0;
}