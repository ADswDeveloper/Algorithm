
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

//cpp 에서는 입력 인수에 포인터가 들어가면 이게 출력값이 아닌가 의심해보면 좋음.
// cpp에서는 단일 출력만 가능 따라서 여러 출력 원할때 매개변수로 포인터 넣어줌 or 배열 넣어주고 싶을때 포인터 사용
void add(int a, int b, int* c, int* d) //cpp는 이름이 같음 함수 여러 개 생성 가능.
{
    *c = a + b;
    *d = a - b;
}

int main()
{
    int sum = 0;
    int minus = 0;
    req(1, 2, &sum, &minus);
    cout << sum << " " << minus << endl;
    cout << "Hello World!\n";
}