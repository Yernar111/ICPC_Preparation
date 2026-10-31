#include <iostream>
#include <unordered_map>
using namespace std;
/* Префикс сум для поиска подмассива с заданной суммой за O(N). Работает в том числе и с отрицательными массивами */
int a[100], b[100];
void query(int k, int n){
    unordered_map<int, int> c; // Хеш-таблица: {префиксная_сумма -> индекс}
    c[0] = -1;
    for(int j=0;j<n;j++) {
        int m = b[j] - k; /* Разность суммы элементов до j и числа k */
        if (c.find(m) != c.end()){ /* Если разность m есть в таблице, b[j]-m даст число k */
            int i = c[m];
            cout<<i+1<<" "<<j; // Выводим найденный отрезок
            return;
        }
        
        if (c.find(b[j]) == c.end()){ /* Иначе добавляем текущую префиксную сумму и ее индекс в таблицу */
            c[b[j]] = j;
        }
    }
    cout<<-1;
    return;
}

int main() {
    int n,k;
    cin>>n;
    cin>>a[0];
    b[0]=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    cin>>k;
    query(k,n);

    return 0;
}
