#include <iostream>
#include <algorithm>
using namespace std;
/* Two pointers для нахождения индексов пары чисел в отсортированном массиве сумма которых равна числу target */
int main(){
    int n,target;
    cin>>n>>target;
    int a[n];
    int left=0, right=n-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    while (left<right){
        if (a[left]+a[right]>target){
            right--;
        }
        else if (a[left]+a[right]<target){
            left++;
        }
        else{
            cout<<left<<" "<<right;
            return 0;
        }
    }
    cout<<-1;

    return 0;
}