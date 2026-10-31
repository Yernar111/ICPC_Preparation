#include <iostream>
using namespace std;
/* Два указателя для поиска подмассива сумма элементов которого равна k за O(N). Работает только с неотрицательным массивом */
int main(){
    int n,k, left=0, right=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int current=0;
    while (right<n){
        current+=a[right];

        if (current==k){
            for(int i=left;i<=right;i++){
                cout<<a[i]<<" ";
            }
            return 0;
        }

        while (current>k && left<=right){
            current-=a[left];
            left++;
        }

        right++;
    }
    cout<<-1;


    return 0;
}