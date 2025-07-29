
#include <iostream>
#include <cstring>

using namespace std;

//Prob1
// N 이하 자연수 3또는 5의 배수 다 합한 값
int func1(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

//Prob2
//주어진 길이 N int배열 arr에서 합이 100인 서로 다른
// 위치의 두 원소가존재하면 1을, 존재하지 않으면 0반환
// arr각 수는 0이상 100이하, N은 1000 이하.

// O(N^2) -> i = 0일때 N - 1 개 합 비교
// i = 1 일때 N - 2개 합 비교
// ...
// (N - 1) + (N - 2) + ... + 3 + 2 + 1 = N^2 - N / 2
// (첫 수 + 끝 수) * (개수) / 2
// 아무튼 O(N^2) 복잡도임.

int func2(int arr[], int N)
{
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] + arr[j] == 100)
            {
                result = 1;
                break;
            }
        }
    }
    return result;
}

// Prob3
// N이 제곱수이면 1을 반환하고 제곱수가 아니면 0을 반화하는 함수

int func3(int N)
{
    int result = 0;
    for (int i = 0; i * i<= N; i++) // 이렇게 하면 O(루트N) 임.
    {
        if (i * i == N)
        {
            result = 1;
        }
    }
    return result;
}

int main()
{
    
    cout << func1(34567) << endl;

    return 0;
}
