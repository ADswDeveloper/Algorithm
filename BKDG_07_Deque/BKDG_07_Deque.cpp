#include <iostream>

using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];
int head = MX, tail = MX;
// tail이 마지막 원소 인덱스 + 1, head가 제일 앞 원소 인덱스..
// 따라서 head 자리에 넣으면 안됨.
void push_front(int x)
{
    dat[--head] = x;
}

void push_back(int x)
{
    //dat[++tail] = x;
    dat[tail++] = x;
}

void pop_front()
{
    head++;
}

void pop_back()
{
    tail--;
}

int front()
{
    return dat[head];
}

int back()
{
    return dat[tail - 1];
}

int main()
{
    
}
