#include <iostream>
using namespace std;

int cpppp()
{
    while (true)
    {
        int triangle = 1;
        int row = 0;
        cout << "행 개수를 입력하세요 : ";
        cin >> row;

        for (int i = 1; i <= row; i++)
        {
            for (int k = 1; k <= i; k++)
            {
                cout << triangle << " ";
                triangle++;
            }
            cout << endl;
        }
    }
    return 0;
}
