#include <iostream>
using namespace std;
/* Number Theory */
long long binPow(int base, int exp) {
    if (exp == 0) return 1;
    if (exp % 2 == 1) {
        return binPow(base, exp - 1) * base;
    }
    long long b = binPow(base, exp / 2);
    return b * b;
}
int main(){
    int n,exp;
    cin>>n>>exp;
    cout<<binPow(n,exp);
    return 0;
}