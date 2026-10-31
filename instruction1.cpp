#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm> 
using namespace std;
int main(){
    cout<<"Vector"<<endl;
    vector <int> a_1(5); /* Вектор в котором 5 элементов каждая их которых равна 0 */
    vector <int> a(5,1); /* Вектор в котором 5 элементов каждая их которых равна 1 */
    for (int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    vector <int> b {1,3,5,7,9};
    cout<<b.front()<<" "<<b.back()<<" "<<b.at(2); /* 1 9 5 */ /* Вернуть первый и последний элемент вектора и значение элемента с индексом 2 */

    cout<<endl;
    int head=10;
    /* Добавляем на 2 индекс элемент head, затем удаляем последний элемент вектора и элемент с индексом 3 */
    b.insert(b.begin()+2, head); /* {1,3,10,5,7,9} */
    b.pop_back(); /* Удаляет последний добавленный элемент */
    b.erase(b.begin()+3); /* {1,3,10,7} */

    for (auto i : b){
        cout<<i<<" ";
    }

    cout<<endl;
    vector <int>::iterator check=b.begin(); /* Обьявляем итератор и ставим на первый элемент вектора */
    cout<<*check; /* 1 */ /* Разыменование итератора чтобы получить доступ к значению элемента */

    cout<<endl;
    check++; /* Переместили итератор на следующий элемент */
    *check=94; /* Меняем значение элемента под итератором */
    for (int i=0;i<b.size();i++){
        cout<<b[i]<<" "; /* {1,94,10,7} */
    }

    cout<<endl;
    vector <int> c{21, 45, 16, 93, 50};
    vector <int>::iterator soap;
    for (soap=c.begin();soap!=c.end();soap++){ /* Еще один способ пройтись по элементам контейнера с помощью итератора */
        cout<<*soap<<" ";
    }

    cout<<endl;
    sort(c.begin(), c.end()); /* Отсортировать вектор */
    sort(c.begin(), c.end(), greater<int>()); /* Сортировка по убыванию */
    for (int i : c){ // Тоже итератор(вызывает begin() и end())
        cout<<i<<" ";
    }

    cout<<endl<<"Set"<<endl;
    set <int> d{3,1,5,31}; /* Set это контейнер каждый элемент которого уникален и отсортирован */
    d.insert(17);
    d.insert(17);/* Добавление элемента, если элемент уже есть то контейнер не измениться */
    d.erase(3); /* Удаляет элемент с значением 3 */
    int n=d.size(); /* Количество элементов */
    for (int i : d){
        cout<<i<<" "; /* {1,5,17,31} */
    }

    cout<<endl;
    if (d.count(5)>0){ /* Функция проверяет есть ли число 5 в set, если есть возвращает 1, иначе 0  */
        cout<<"YES";
    }

    cout<<endl;
    set <int>::iterator bone;
    for (bone=d.begin();bone!=d.end();bone++){ /* Пройтись по элементам set с помощью итератора */
        cout<<*bone<<" ";
    }

    cout<<endl;
    unordered_set <int> f{4,2,7,5}; /* Не сортированный set */
    f.insert(3);
    f.insert(9); /* Добавялет элемент в начало set */
    unordered_set <int>::iterator call;
    for (call=f.begin();call!=f.end();call++){
        cout<<*call<<" "; /* {9,3,4,2,7,5} */
    }

    cout<<endl<<"Map"<<endl;
    map <int, char> e; /* Map это контейнер который хранит в себе пары ключ-значение(каждый ключ уникален и значения сортируются по ключам), что помогает быстро находить значения по ключам */
    e.insert({1, 'b'});
    e.insert({3, 'w'}); /* Добавление ключа и значения */
    e[3]='t'; /* Если такой ключ уже существует тогда значение поменяется на новое */
    e[7]='s';
    e[5]='v'; /* Если добавить уже существующий ключ с помощью insert то ключ и значение не изменится, если же это сделать через a[key]=value то ключ поменяет свое значение на новое */
    e[2]='h';
    e.erase(7); /* Удаляем элемент с ключом 7 */
    if (e.count(5)>0){
        cout<<"YES"<<" "<<e[5]<<endl; /* Если ключ 5 есть в map то выводит YES и значение с ключом 5 */
    }
    int fall=e.size();
    for (auto h : e){ /* Переменная h будет равняться каждому элементу в контейнере начиная с начала и до конца контейнера */
        cout<<h.first<<" "<<h.second<<endl; /* {{1, b},{2, h},{3, t},{5, v}} */
    }

    cout<<endl;
    map <int, char>::iterator went;
    for (went=e.begin();went!=e.end();went++){ /* Выводить каждый элемент map(с ключом и значением) с помощью итератора */
        cout<<went->first<<" "<<went->second<<endl;
    }

    cout<<endl;
    map <int, string> g{ /* Map с заранее прописанными элементами */
        {11,"drink"},
         {10,"food"},
         {12,"air"}
        };
    map <int,string>::iterator door;
    for (door=g.begin();door!=g.end();door++){
        cout<<door->first<<"\t"<<door->second<<"\n";
    }

    cout<<"Stack"<<endl;
    stack <int> h; /* Stack структура данных действующая по принципу last-in-first-out, последний добавленный элемент удаляется первым */
    h.push(11);
    h.push(6); /* Добавление элементов */
    h.push(3);
    h.pop(); /* Удаляем последнее, то есть 3 */
    cout<<h.top(); /* Выводим последнее, то есть 6 */

    cout<<endl;
    h.push(4);
    h.push(8);
    h.push(5);
    while (!h.empty()){ /* 5,8,4,6,11 */ /* Пока не пустой */
        cout<<h.top()<<" ";
        h.pop();
    }

    cout<<endl<<"Queue"<<endl;
    queue <char> i; /* Queue структура данных действующая по принципу first-in-first-out, первый добавленный элемент удаляется первым */
    i.push('q');
    i.push('a');
    i.push('c');
    i.pop(); /* Удалили первый элемент */
    cout<<i.front();

    cout<<endl<<"Pair"<<endl;
    string slow="abcd";
    int fast=11;
    pair <string, int> j(slow,fast); /* Pair контейнер который хранит в себе две связанные между собой данные */
    cout<<j.first<<" "<<j.second; /* abcd, 11 */

    cout<<endl;
    vector <pair<char, int>> k{{'g',99},{'z',100}}; /* Pair вложенный внутрь вектора означает что каждый элемент вектора содержит в себе еще два элемента */
    k.push_back({'b',13});
    k.push_back({'a',9});
    for (int i=0;i<k.size();i++){
        cout<<k[i].first<<" "<<k[i].second<<endl;
    }

    vector<pair<char, int>>::iterator pool;
    for (pool=k.begin();pool!=k.end();pool++){
        cout<<pool->first<<" "<<pool->second<<endl;
    }

    cout<<endl;
    map <string, pair<int, int>> l; /* Pair вложенный в значение map, значение map содержит два элемента */
    l.insert({"look", {15,7}});
    l.insert({"king", {41,2}});
    l.insert({"fine", {19, 22}});
    map <string, pair<int, int>>::iterator hold;
    for (hold=l.begin();hold!=l.end();hold++){
        cout<<hold->first<<" "<<hold->second.first<<" "<<hold->second.second<<endl;
    }

    cout<<endl;
    map <pair<string, char>, pair<int, int>> m{
        {{"efgh",'w'}, {12, 0}},
        {{"efgh",'r'}, {33, 0}}
    }; /* Pair вложенный в ключ и значение map, и ключ и значение содержат два элемента, ключ сортируется сначала по первому, затем по второму элементу, если и первый и второй элемент ключа двух разных map будет одинаковым то значение элемента map поменяется на новую */
    m.insert({{"ball",'q'},{33,21}});
    m.insert({{"feel",'e'},{9,55}});
    if (m.count({"efgh",'w'})){
        cout<<"YES"<<endl;
    }
    map <pair<string, char>, pair<int, int>>::iterator tree;
    for (tree=m.begin();tree!=m.end();tree++){
        cout<<tree->first.first<<" "<<tree->first.second<<" "<<": "<<tree->second.first<<" "<<tree->second.second<<endl;
    }

    vector <pair<pair<int, int>,pair<int, int>>> p; /* Вектор с типом данных pair, который в свою очередь хранит еще два вложенных pair */
    p.push_back({{1,2},{3,4}});
    cout<<p[0].first.first<<" "<<p[0].first.second<<" "<<p[0].second.first<<" "<<p[0].second.second;



	return 0;
}
