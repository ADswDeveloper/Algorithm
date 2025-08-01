#include <iostream>
#include <vector>

using namespace std;
const int MX = 1000005;

int dat[MX], pre[MX], nxt[MX]; // MX 는 const int 로 써야 함. c++에서 전역 변수초기화는 상수값으로만 가능해야 함.
int unused = 1;
void traverse()
{
    int cur = nxt[0];
    while (cur != -1)
    {
        cout << dat[cur] << " ";
        cur = nxt[cur];
    }
    cout << '\n';
}

void insert(int addr, int num)
{
 
    dat[unused] = num;
    pre[unused] = addr;
    if (nxt[addr] != -1)    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1)    pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr)
{
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
    nxt[pre[addr]] = nxt[addr];
    
    nxt[addr] = -1;
    pre[addr] = -1;
    dat[addr] = -1;
}

void insert_test() {
    cout << "****** insert_test *****\n";
    insert(0, 10); // 10(address=1)
    traverse();
    insert(0, 30); // 30(address=2) 10
    traverse();
    insert(2, 40); // 30 40(address=3) 10
    traverse();
    insert(1, 20); // 30 40 10 20(address=4)
    traverse();
    insert(4, 70); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test() {
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}



int main1()
{
    fill(pre, pre + MX, -1); // fill()은 런타임 함수라 main()안에서 실행해야 함.
    fill(nxt, nxt + MX, -1);
    
    
    insert_test();
    erase_test();
    return 0;
}
