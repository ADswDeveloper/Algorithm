#include <iostream>
#include <string>
using namespace std;

// 코딩 테스트의 목표는 남이 알아볼 수 있는 클린코드 작성하는게 아님. 
// 더럽더라도 빠르게 짜고 줄이는게 좋음.

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    int a[10005];
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < x) cout << a[i] << " ";
    }
}

int main2(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, t;
    cin >> n >> x;
    while (n--)
    {
        cin >> t;
        if (t < x) cout << t << ' ';
    }
}
