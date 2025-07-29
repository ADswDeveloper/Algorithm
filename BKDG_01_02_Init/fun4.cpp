
#include <iostream>
#include <cstring>

using namespace std;
//N 이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수
// func4(int N) 작성.

int func4(int N)
{
    int mul = 1;
    for (int i = 0; i < N; i++)
    {
        if ((mul <= N) && (2 * mul <= N))
        {
            mul *= 2;
        }
        else
        {
            break;
        }
    }
    return mul;
}

int func4_improve(int N)
{
    int mul = 1;
    while (mul * 2 <= N) mul *= 2;
    return mul;
}

int main()
{
    cout << func4(2) << endl;
    cout << func4(97615282) << endl;
    cout << func4(1024) << endl;
}

// 한줄 평
// 반복 -> 무턱대고 for문 떠올릴게 아니라,
// 반복 -> 정해진 횟수만큼 반복하거나, '어떤 조건이 만족되는 동안', '계속 반복'. 
// 계속 반복 -> 나는 2를 계속 곱할거야. 어떤 조건 -> mul * 2 가 N 보다 작은 동안
// 2^k, N, 2^k-1 시이에 N 이 있다고 생각하면 편함. 

//10의 10 거듭제곱 하면 int 인티저 오버플로우 발생.
// for(char a = 0; a < 128; a++) -> 오버플로우 발생. 127일때 

// 실수 자료형 쓸 일 있으면 double 사용.
// 실수 저장/연산 과정에서 반드시 오차가 발생.
// 실수를 2진수로 저장할때 fraction  필드가 유한하기 때문.
// double에 long long 함부로 담지 말기.(오차 생김)
// int는 21억이라 double에 담아도 오차 발생 X.
// 실수 비교시 등호 사용X