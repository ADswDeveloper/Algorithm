#include <iostream>
using namespace std;

int main()
{
    int a = 123;//어떤 변수는 메모리 공간의 이름
    //그 공간에 값 할당하라! 는 뜻.
    cout << a << " " << &a << endl;
    std::cout << "Hello World!\n";

    int* b = &a; // b에 a의 주소 대입
    //int 타입의 데이터가 저장될 수 있는 메모리 공간의 주소
    // 
    //dereference operator 역참조
    cout << b << " " << *b << endl; // *을 붙여주면 b에는 메모리 주소가 저장되있음.
    // b에 저장된 주소에가서 메모리에 가서 거기 저장된 값 가져와라.
    // int 크기만큼 메모리 읽어옴.

    // 내부적으로는 *b 하나 a값 읽어오는건 과정 같음.

    *b = 567;
   
    cout << a << " " << *b << endl; // 567 567 출력.

    double* c = 0;
    //sizeof(int*) = sizeof(double*)
    //집이 크다고해서 주소도 큰건 아님.

    cout << size_t(c) << size_t(c + 1) << endl; // +8 됨.
    //주소 연산은 자료형 크기만큼 값 더해짐.
    // double은 8바이트씩 차지하니까 주소 + 1하면 8바이트씩 건너뜀.
    // 배열과 같음. 

    char my_str[] = { 'h', 'e', 'l', 'l', 'o' };
    char* ptr = my_str;
    cout << *(ptr + 4) << endl; //'o'
    cout << ptr[4] << endl; // 'o'
    // 포인터를 배열처럼 사용 가능. 

}
