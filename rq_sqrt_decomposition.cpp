#include <iostream>
#include <cmath>
using namespace std;
/* RMQ/RSQ, Point Update */
/* Нахождение суммы на отрезке с помощью sqrt decomposition за O(sqrt(n)) */
/* Начальный массив делится на sqrt(n) блоков каждый размера sqrt(n). Для каждого блока записывается сумма элементов внутри нее  */
/* При запросе блоки которые находятся полностью внутри отрезка суммируются за O(1), сумма элементов крайних блоков частично входящих в отрезок вычисляются по штучно */
int main(){
    int n;
    cin>>n;
    int block_size = sqrt(n); /* Оптимальный размер и количество блоков */
    int block_count = (n + block_size - 1) / block_size; /* Количество блоков округляем вверх */

    int a[n], blocks[block_count]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        blocks[i / block_size] += a[i]; /* j-тый блок содержит сумму элементов от a[j*block_size] до a[(j+1)*block_size-1] */
    }

    /* При обновлении одного элемента массива, обновляется значение только для одного блока. То есть занимает O(1) */
    // int idx,new_value;
    // cin>>idx>>new_value;
    // a[idx] = new_value;
    // blocks[idx/block_size] += (new_value - a[idx]);

    int l,r;
    cin>>l>>r;

    int l_block=l/block_size; /* Индексы начального и конечного блоков полностью или частично входящих в отрезок, другие блоки не рассматриваем */
    int r_block=r/block_size;

    int total=0;
    if (l_block==r_block){ /* Если отрезок лежит внутри одного блока */
        for(int i=l;i<r;i++){
            total+=a[i];
        }
        return 0;
    }
    int l_block_end = (l_block + 1) * block_size - 1; /* Индекс конца левого блока */
    for (int i=l; i<=l_block_end; i++) {
        total += a[i];
    }

    for (int i=l_block+1;i<r_block;i++){
        total += blocks[i];
    }

    int r_block_start = r_block*block_size; /* Индекс начала правого блока */
    for(int i=r_block_start;i<=r;i++){
        total+=a[i];
    }
    cout<<total;

    cout<<"\n";


    return 0;
}