#include <iostream>
#include <cstring>

using namespace std;

const int kMaxStr = 100;
int Min(int a, int b)
{
    return a > b ? a : b;
}


int main()
{
    // 정적 배열(메모리가 정적)
    char str1[] = "Hello, World!";
    char str2[kMaxStr];
    // 문자열 크기 지정해주거나, 초기화 해주거나.

    //str2 = str1; // 에러! 프로그래머에게 편의성보다 효율성이 더 중요.. 
    memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));
    // str1으로부터 시작되는 메모리를 3rd 사이즈만큼 str2로 시작되는 메모리에 복사해라.
    
    // stack -> 컴파일러가 미리 잡아놓음. str1, str2 는 스택에 담김.(컴파일 시 미리 알 수 있음)
    // heap -> OS가 커질수있도록 가상으로 관리.
    
    char* dynamic_array = new char[kMaxStr];
    //char 타입 kMaxStr개 메모리 달라! 메모리 공간 첫번째 주소를 할당.
    
    memcpy(dynamic_array, str1, kMaxStr);

    delete[] dynamic_array; // 알아서 삭제해줌. delete 시에는 메모리 크기 필요x
    //dynamic_array는 힙에 저장됨. (동적배열은 heap에 저장됨.)
    
    // 지우지 않고 재할당할 경우 잃어버림!
    
    
}
