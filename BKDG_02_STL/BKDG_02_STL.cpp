#include <iostream>
#include <vector>
#include <string>

//swap -> call by value, call by reference 성질 이용
using namespace std;
void swap2(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
// 참조자. reference -> 변수의 또 다른 이름을 만듦.
// 가독성 안전성을 위해 포인터 대체한다고 생각하면 됨. null ptr 참조 안하게 하는 패러다임.
void swap3(int& a, int& b) // a와 b는 int reference
{
    int tmp = a; 
    a = b; // 이렇게 적어도 원본을 바꿈.
    b = tmp;
}

// STL ->  c++ 라이브러리
// STL도 함수인자에 넣으면 구조체처럼 복사해서 보냄.

// STL 함수 인자로 넘길때 -> 하기처럼 값 비교할때.(바꾸기 X)
// 시간 복잡도 O(N) -> v1 복사해서그럼.
bool cmp1(vector<int> v1, vector<int> v2, int idx)
{
    return v1[idx] < v2[idx];
}

// 시간 복잡도 O(1) -> 복사본 만들지 않고 vector<int>의 reference로 만들어서, 참조 대상의 주소정보만 넘어가서 시간복잡도는 O(1)
bool cmp1(vector<int>& v1, vector<int>& v2, int idx)
{
    return v1[idx] < v2[idx];
}



int main1()
{
// 표준 입출력
// 1. 공백이 포함된 문자열 입력받아야할때 -> (c++ string &) getline 함수 사용하자. (cin, scanf 절대 금지)
    string s;
    getline(cin, s);
    cout << s;

// 2. cin/cout 사용시 확정으로 두 명령어 실행해야됨. ios::sync_with_stdio(0), cin.tie(0)
// 전자는 C stream과 C++ Stream 동기화 해제.(왜 ? 나는 c++ stream 만 쓸거니까)
// 후자는 ,,, 우리 입출력시 버퍼라는 곳을 거침. 우리의 입출력과 콘솔 사이에 버퍼를 거침. 
// 채점 사이트는 출력만 보기 때문에, 굳이 cin 명령 수행 전 cout 버퍼 비울필요 없음. 그렇게 해주는 코드가 cin.tie(0) 임. 
 
//3.endl; 쓰지말기. 개행 문자 출력 후 버퍼 비우라는 뜻인데 중간 중간 버퍼 비우라고 명령 줄 필요 전혀 없음. 줄바꿈 필요하면 개행 문자 출력하기.
    return 0;
}


