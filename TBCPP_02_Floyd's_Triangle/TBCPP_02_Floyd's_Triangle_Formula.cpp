#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    while (true)
    {
        cout << " ���ڸ� �Է��ϼ��� : ";
        cin >> num;

        for (int i = 1; i <= num; i++)
        {
            for (int j = i * (i + 1) / 2 - (i - 1); j <= i * (i + 1) / 2; j++)
            {
                cout << j << " ";
            }
            cout << endl; 
        }
    }

    // � �� n ���� � �� x���� i �� ��ŭ �ִ� -> x�� n - i + 1
    return 0;
}
