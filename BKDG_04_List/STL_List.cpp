#include <iostream>
#include <list>

using namespace std;

int main(void) {
    //list<int> L = { 1,2 }; // 1 2
    //list<int>::iterator t = L.begin(); // t는 1을 가리키는 중

    //L.push_front(10); // 10 1 2
    //cout << *t << '\n'; // t가 가리키는 값 = 1을 출력
    //L.push_back(5); // 10 1 2 5
    //L.insert(t, 6); // t가 가리키는 곳 앞에 6을 삽입, 10 6 1 2 5
    //t++; // t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
    //t = L.erase(t); // t가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환
    //// 10 6 1 5, t가 가리키는 값은 5
    //cout << *t << '\n'; // 5
    //for (auto i : L) cout << i << ' ';
    //cout << '\n';
    //for (list<int>::iterator it = L.begin(); it != L.end(); it++)
    //    cout << *it << ' ';

    list<int> L = { 1,2 }; // 1 2
    auto t = L.begin();
    
    // 앞에 넣기.
    L.push_front(10); // 10 1 2
    // 뒤에 넣기.
    L.push_back(5);  // 10 1 2 5


    L.insert(t, 6); // 10 6 1 2 5 . t가 가리키는 곳 앞에 6 삽입
    t++; // t가 가리키는 값 2
    
    t = L.erase(t); // t 가 가리키는 값 제거 후 그 다음 위치인 5 반환.(제거하면 다음 원소값 반환)
    
    cout << *t << '\n';
    
    for (int i : L) cout << i << ' ';
    cout << '\n';

    return 0;
}