#include <iostream>
using namespace std;
/* Два указателя для нахождения минимально возможной длины подмассива сумма элементов которого не меньше K за O(N). Работает только для неотрицательного массива */
int main() {
    int n,k;
    cin>>n>>k;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int left = 0, right=0;
    long long current_sum = 0;
    int min_len = n + 1; // Заведомо больше любого возможного подмассива

    while(right<n){
        current_sum += a[right];

        while (current_sum >= k) { // Пока сумма подмассива [left...right] >= K, пробуем сжать окно слева
            min_len = min(min_len, right - left + 1); // Длина подмассива от l до r(включительно) равна r-l+1 
            current_sum -= a[left];
            left++;
        }
        right++;
    }

    if (min_len == n + 1) { // Если min_len не изменилась, значит сумма даже всех элементов исходного массива оказалась меньше K, следовательно подмассив с суммой >= K не найден
        cout << -1 << "\n"; 
    }
    else {
        cout << min_len << "\n";
    }

    return 0;
}