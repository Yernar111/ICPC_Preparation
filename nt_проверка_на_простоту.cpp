#include <iostream>
#include <cmath>
using namespace std;
/* Number theory */
bool isPrime_basic(int n){ /* Классический способ */
    if (n<=1){
        return false;
    }
    int m=sqrt(n);
    for(int i=2;i<=m;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

bool isPrime_advanced(int n){ /* Улучшенный алгоритм. Проверяем только делители 6k+1 и 6k+5, так как остальные выражения дают составные числа  */
    if (n<=1) return false;
    if (n<=3) return true;
    if (n%2==0 && n%3==0) return false;
    int i=5; /* k=1 */
    int m=sqrt(n);
    while (i<=m){
        if (n%i==0 || n%(i+2)==0) return false; /* Проверяем делители 6k-1(эквивалентно 6k+5) и 6k+1 */
        i+=6;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    cout<<isPrime_advanced(n);

    return 0;
}