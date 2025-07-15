#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    while (true)
    {
        cout << " 숫자를 입력하세요 : ";
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

    // 어떤 수 n 에서 어떤 수 x까지 i 개 만큼 있다 -> x는 n - i + 1
    return 0;
}
