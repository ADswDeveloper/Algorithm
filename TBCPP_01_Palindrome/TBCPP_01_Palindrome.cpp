#include <iostream>
using namespace std;

int main()
{
    // ȸ��, level, abc, refer
    char str[100];
    while (true)
    {
        cout << "���ڿ��� �Է��ϼ��� : ";
        cin >> str;
        
        int len = 0;
        
        while (str[len] != '\0')
        {
            len++;
        }
        bool isPalindrome = true;
        for (int i = 0; i < len / 2; i++)
        {
            if (str[i] != str[len - 1 - i])
            {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome)
        {
            cout << "True!! Palindrome ���ڿ� �Դϴ�." << endl;
        }
        else
        {
            cout << "False!! Palindrome ���ڿ��� �ƴմϴ�." << endl;
        }

    }

    // �˰� �� ��
    // 1, i �ε��� ���� ������� �ٸ� ��ġ ���� or ǥ�� ����(������ ���н����� �����ϵ�)
    // 2, ¦�� Ȧ�� ���������� ��ġ�°� �ִٸ� ���� X, len / 2 �ϸ� Ȧ���� ��� ©�� -> ���� ������ ���꿡�� ������ ������ ���� �̿�.
}

