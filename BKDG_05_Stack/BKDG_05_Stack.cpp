//한줄평
// 1. push, pop, top , empty
// 2. Firt In Last Out 

#include <iostream>
#include <string>
// 스택은 프링글스 통.
// FILO. 
// 스택 큐 덱을 묶어 restricted structure(특정 위치에서만 원소를 추가/제거 가능함)
// 원소 추가와 제거가 O(1)
// 끝에있는 원소 확인은 O(1)
// 원래 스택은 원소 추가, 제거, 상단 원소 확인만 제공
// 나머지 원소는 확인하는게 기능에 포함X.
// STL도 마찬가지.
// 근데 배열로 구현하면 가능은 하긴 함.
using namespace std;

//const int MX = 1000005;
//int dat[MX];
//int pos = 0; // 스택의 길이(원소 수)
//
//void push(int x)
//{
//    dat[pos] = x;
//    pos++;
//    //dat[pos++] = x;
//}
//
//void pop()
//{
//    //if(pos != 0) dat[--pos] = 0;
//    pos--; // 어차피 추가할때 덮어씌워질거니 초기화할 필요 없음.
//}
//
//int top()
//{
//    return dat[pos - 1];
//}



int main4()
{
    //stl 스택을 쓰면 최소 스택에는 문제가 없음을 알 수 있음. 
    // push, pop, top , empty
    // 스택 비었을때 pop top 에러 발생
    // 
    

    return 0;
}

