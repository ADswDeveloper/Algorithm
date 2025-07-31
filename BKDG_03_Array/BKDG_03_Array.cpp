#include <iostream>
#include <string>
#include <vector>

using namespace std;

// �迭 - �޸� �� ���Ҹ� �����ϰ� ��ġ�� �ڷᱸ��
// c++ -> �ڷᱸ���ν��� �迭������ ���̸� ������� �ø��ų� ���� �� ����.

// �迭�� ���� 
// 1. k��° ���Ҹ� O(1)�� Ȯ��/���� ���� -> ���� �ּҿ��� kĭ�� ������ ���� �Ǵϱ�.
// 2. �߰������� �Ҹ�Ǵ� �޸��� ��(-overhead)�� ���� ����.
// 3. Cache hit rate�� ����. 
// 4. �޸� �� ������ ������ ��ƾ� �ؼ� �Ҵ翡 ������ �ɸ�.

// ������ ��ġ ���� Ȯ��/���� �� ���� ���� �߰� �� ���� -> O(1) 
// ���� �߰�, ���� -> ��������� N/2 �̴ϱ�. O(N) �ڿ��� ������ ��ĭ�� ���ܾ��ϴϱ�

//void insert1(int idx, int num, int arr[], int& len)
//{   
//    len += 1;
//    int tmp = 0;
//    for (int i = idx; i < len; i++)
//    {
//        tmp = arr[i];
//        if (i == idx)
//        {
//            arr[i] = num;
//        }
//        else
//        {
//            arr[i] = tmp;
//        }
//        
//    }
//}

//void insert(int idx, int num, int arr[], int& len)
//{
//    int* tmpArr;
//    len += 1;
//    for (int i = 0; i < len; i++)
//    {
//        if (i < idx) tmpArr[i] = arr[i];
//        else if (i == idx) tmpArr[i] = num;
//        else tmpArr[i] = arr[i - 1];
//    }
//    arr = tmpArr;
//}
// �� ����� ������ -> arr�� ����Ű�� �ּҸ� �޶����� ���� arr�� ���� ����. 
// 2. int* tmpArr �ع����� �޸𸮿� ���� �󸶳� ������ ���� ���� ���.

void insert(int idx, int num, int arr[], int& len)
{
    
    for (int i = len; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len += 1;
}

void erase(int idx, int arr[], int& len)
{   
    len -= 1;//len--;
    for (int i = idx; i < len; i++) arr[i] = arr[i + 1];
}

int main1()
{
    int arr[10] = { 10, 50, 40, 30, 70, 20 };
    int len = 6;
    insert(3, 60, arr, len);
    
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << "\n";
    erase(4, arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ' ';
    }

    // �迭 �ʱ�ȭ
    // fill(������, ����, �ݺ���) -> ������ �ش� ��ġ ���� x

    int b[2][3]; // 2�� 3�� ¥�� �迭. b[0]�� 1�� , b[1]�� 2��
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = 0;
        }
    }

    int a[21];
    fill(a, a + 21, 0);
    for (int i = 0; i < 21; i++)
    {
        fill(b[i], b[i] + 21, 0);
    }
    return 0;
}

