#include <iostream>
#include <string>
using namespace std;

// �ڵ� �׽�Ʈ�� ��ǥ�� ���� �˾ƺ� �� �ִ� Ŭ���ڵ� �ۼ��ϴ°� �ƴ�. 
// �������� ������ ¥�� ���̴°� ����.

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
