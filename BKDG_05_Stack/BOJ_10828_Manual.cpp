// 한줄 평
// 1. 포인터 정해서 자료구조 가리킬땐 값을 쓰거나 지울때 포인터 위치도 변경시켜주어야 한다.
// 2. 출력할때 \n 붙여주기.
// 3. stack은 range-based loop 사용 불가

#include <iostream>

using namespace std;

const int MX = 10005;
int dat[MX];
int pos = 0;

void push(int x)
{
	dat[pos++] = x;
}

int pop()
{
	if (pos != 0) return dat[--pos];
	else return -1;
}

int size()
{
	return pos;
}

int empty()
{
	if (pos == 0) return 1;
	else return 0;
}

int top()
{	
	if (pos != 0) return dat[pos - 1];
	else return -1;
}

int main2()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	while (N--)
	{
		string s;
		cin >> s;
		if (s == "pop")
		{
			cout << pop() << '\n';
		}
		else if (s == "size")
		{
			cout << size() << '\n';
		}
		else if (s == "empty")
		{
			cout << empty() << '\n';
		}
		else if (s == "top")
		{
			cout << top() << '\n';
		}
		else if (s == "push")
		{
			int num;
			cin >> num;
			push(num);
		}


	}

	return 0;
}

//push X : 정수 X를 스택에 넣는 연산이다.
//pop : 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//size : 스택에 들어있는 정수의 개수를 출력한다.
//empty : 스택이 비어있으면 1, 아니면 0을 출력한다.
//top : 스택의 가장 위에 있는 정수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다.

// 첫째 줄에 주어지는 명령의 수 N(1 ≤ N ≤ 10, 000)이 주어진다.
// 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다.
// 주어지는 정수는 1보다 크거나 같고, 100, 000보다 작거나 같다.
// 문제에 나와있지 않은 명령이 주어지는 경우는 없다.