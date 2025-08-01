#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 배열 - 메모리 상에 원소를 연속하게 배치한 자료구조
// c++ -> 자료구조로써의 배열에서는 길이를 마음대로 늘리거나 줄일 수 있음.

// 배열의 성질 
// 1. k번째 원소를 O(1)로 확인/변경 가능 -> 시작 주소에서 k칸만 옆으로 가면 되니까.
// 2. 추가저으로 소모되는 메모리의 양(-overhead)가 거의 없음.
// 3. Cache hit rate가 높음. 
// 4. 메모리 상에 연속한 구간을 잡아야 해서 할당에 제약이 걸림.

// 임의의 위치 원소 확인/변경 및 원소 끝에 추가 및 제거 -> O(1) 
// 원소 추가, 제거 -> 평균적으로 N/2 이니까. O(N) 뒤에거 앞으로 한칸씩 땡겨야하니까

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
// 이 방법의 문제점 -> arr이 가리키는 주소만 달라지고 원본 arr은 변함 없음. 
// 2. int* tmpArr 해버리면 메모리에 공간 얼마나 잡을지 몰라서 에러 띄움.

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

    // 배열 초기화
    // fill(시작점, 끝점, 반복자) -> 끝점은 해당 위치 포함 x

    int b[2][3]; // 2행 3열 짜리 배열. b[0]이 1행 , b[1]이 2행
    
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

