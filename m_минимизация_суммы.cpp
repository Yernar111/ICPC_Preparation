#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
/* Найти такое значение целого числа k которое минимизирует сумму модулей разностей каждого элемента a[i] с числом k.
То есть k которое делает выражение |a[0]-k|+|a[1]-k|+...+|a[n-1]-k| минимальным */
void case_one(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    k=a[n/2]; /* Таким числом является медиана массива(если размер массива четный то, любое из двух медиан является правильным ответом) */
    cout<<k<<"\n";

    int t=0;
    for(int i=0;i<n;i++){
        t+=abs(a[i]-k);
    }
    cout<<t;
    cout<<"\n";
}

/* Найти такое значение рационального числа k которое минимизирует сумму квадратов разностей каждого элемента a[i] с числом k.
То есть k которое делает выражение (a[0]-k)^2+(a[1]-k)^2+...+(a[n-1]-k)^2 минимальным */
void case_two(){
    int n;
    double m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        m+=a[i];
    }
    double k=m/n; /* Таким числом является среднее массива */
    cout<<k<<"\n";

    int t=0;
    for(int i=0;i<n;i++){
        t+=pow(a[i]-k, 2);
    }
    cout<<t;
    cout<<"\n";
}

int main(){
    cout<<"case_one:\n";
    case_one();
    cout<<"case_two:\n";
    case_two();
    return 0;
}