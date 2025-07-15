#include <iostream>
using namespace std;

int main()
{
    // 회문, level, abc, refer
    char str[100];
    while (true)
    {
        cout << "문자열을 입력하세요 : ";
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
            cout << "True!! Palindrome 문자열 입니다." << endl;
        }
        else
        {
            cout << "False!! Palindrome 문자열이 아닙니다." << endl;
        }

    }

    // 알게 된 것
    // 1, i 인덱스 문자 기반으로 다른 위치 접근 or 표현 가능(수열을 수학식으로 접근하듯)
    // 2, 짝수 홀수 나누기전에 겹치는게 있다면 굳이 X, len / 2 하면 홀수인 경우 짤림 -> 정수 나누기 연산에서 나머지 버리는 성질 이용.
}

