#include <bits/stdc++.h>
#include <random>
using namespace std;

bool soul(int n){
    return n%2==0;
}

bool fire(int n){
    return n/10==0;
}

void call(int n){
    cout<<n%2<<" ";
}

int fuel(){
    static int n=0; /* Когда переменная объявляется внутри функции как static, она сохраняет свое значение между вызовами функции*/
    n++;
    return n;
}

bool check(pair <char, int> a, pair <char,int> b){ /* Компаратор который сначала сортирует по первому элементу вектора(по возрастанию), затем по второму(по убыванию) */
    if (a.first==b.first)
        return a.second>b.second;
    return a.first<b.first;
}


int main(){
    vector <int> a{2,5,3,1,4,8,6,5};
    int n=count_if(a.begin(),a.end(),soul); /* Count_if(begin, end, function) считает количество элементов в контейнере выполняющее условие */
    cout<<n;

    cout<<endl;
    int b[6]={4,12,5,3,15,10};
    n=count_if(b,b+6,fire); /* Тоже самое для массива */
    cout<<n;

    cout<<endl;
    vector <int> c{1,2,3,4,5,6};
    rotate(c.begin(),c.begin()+2,c.end()); /* Rotate(begin, middle, end) выводит элементы начиная с middle до end, а затем элементы с begin до middle */
    for (int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }

    cout<<endl;
    vector <int> d{3,1,3,2,4,1,5,2};
    sort(d.begin(),d.end()); /* Для использования unique контейнер должен быть отсортирован */
    vector <int>::iterator fall=unique(d.begin(),d.end()); /* Unique(begin, end) возвращает итератор который указывает но позицию диапазона содержащую уникальные элементы */
    d.erase(fall,d.end()); /* Удаляем все что за пределами диапазона */
    for (int i : d){
        cout<<i<<" ";
    }

    cout<<endl;
    vector <int> e{1,2,3,4,5,6};
    for_each(e.begin(),e.end(),call); /* For_each(begin, end, function) прописанная функция применяется к каждому элементу контейнера в прописанном диапозоне */

    cout<<endl;
    vector <int> f(6); /* Вектор из 6 элементов */
    generate(f.begin(),f.end(),fuel); /* Generate(begin, end, function) заполняет прописанный диапазон контейнера значениями созданными внутри функции */
    for (int i=0;i<f.size();i++){
        cout<<f[i]<<" ";
    }

    cout<<endl;
    vector <int> g(6,0);
    fill(g.begin()+2,g.end(),3); /* Fill(begin, end, value) заполняет прописанный диапазон определенными значениями */
    for (int i=0;i<g.size();i++){
        cout<<g[i]<<" ";
    }

    cout<<endl;
    vector <int> h{1,2,3};
    int num=0;
    do {
        num++; /* Do while сначала выполняет код в блоке do и только затем проверяет условие, пока условие правдива снова будет выполняться код из блока do */
    } while(next_permutation(h.begin(),h.end())); /* Next_permutation генерирует следующую лексикографическую перестановку и меняет значения контейнера на новую, если текущая перестановка является наибольшей в лексикографчиеском порядке(например, {3,2,1}), функция возвращает false */
    cout<<num; /* Количество перестановок */

    cout<<endl;
    vector <int> i{4,2,5,3,1,6};
    auto m=find(a.begin(),a.end(),3); /* Find(begin, end, value) ищет в прописанном диапазоне контейнера элемент, если такого элемента нет то возвращает конец диапазона */
    if (m!=a.end()){ /* Если переменная не равна концу, значит значение есть в контейнере */
        cout<<"YES";
    }

    cout<<endl;
    vector <pair<char,int>> k{{'a',3},{'a',1},{'a',2},{'b',1},{'b',2},{'c',5}};
    sort(k.begin(),k.end(),check); /* Check - функция(компаратор) с типом данных bool для сортировки по определенному закону */
    for (int i=0;i<k.size();i++){
        cout<<k[i].first<<" "<<k[i].second<<endl;
    }

	return 0;
}

