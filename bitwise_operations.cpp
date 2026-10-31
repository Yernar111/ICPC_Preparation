#include <iostream>
using namespace std;
 
bool isEven(int n){
    return (n & 1) == 0; /* У четных чисел младший бит всегда равен 0, поэтому операция AND с единицой вернет 0 */
}

bool areDifferentSigns(int n, int m){
    return n^m<0; /* Если результат XOR отрицательный, то числа имеют разные знаки(у положительного числа первый бит равен 0, у отрицательного - 1) */
}

bool isPowerOfTwo(int n){
    return n > 0 && (n & (n - 1)) == 0; /* Если число является степенью двойки то только первый бит этого числа 1, а у числа на единицу меньше все биты кроме первого 1    */
}

int divideByTwo(int n){
    return n >> 1; /* Деление на два с округлением вниз */
}
int changeSign(int n){
    return ~n+1; /* Поменять знак числа */
}
int TwoPowerOfN(int n){
    return 1<<n; /* Сдвинуть бит 1 на n позиции влево. Вернет 2^n  */
}

int main(){

    return 0;
}