
#include <iostream>
#include <cstring>

using namespace std;
//N ������ �� �߿��� ���� ū 2�� �ŵ��������� ��ȯ�ϴ� �Լ�
// func4(int N) �ۼ�.

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

// ���� ��
// �ݺ� -> ���δ�� for�� ���ø��� �ƴ϶�,
// �ݺ� -> ������ Ƚ����ŭ �ݺ��ϰų�, '� ������ �����Ǵ� ����', '��� �ݺ�'. 
// ��� �ݺ� -> ���� 2�� ��� ���Ұž�. � ���� -> mul * 2 �� N ���� ���� ����
// 2^k, N, 2^k-1 ���̿� N �� �ִٰ� �����ϸ� ����. 

//10�� 10 �ŵ����� �ϸ� int ��Ƽ�� �����÷ο� �߻�.
// for(char a = 0; a < 128; a++) -> �����÷ο� �߻�. 127�϶� 

// �Ǽ� �ڷ��� �� �� ������ double ���.
// �Ǽ� ����/���� �������� �ݵ�� ������ �߻�.
// �Ǽ��� 2������ �����Ҷ� fraction  �ʵ尡 �����ϱ� ����.
// double�� long long �Ժη� ���� ����.(���� ����)
// int�� 21���̶� double�� ��Ƶ� ���� �߻� X.
// �Ǽ� �񱳽� ��ȣ ���X