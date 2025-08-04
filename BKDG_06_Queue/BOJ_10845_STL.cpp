#include <iostream>
#include <queue>
#include <string>

using namespace std;
// queue -> push, pop, front, back, size, empty
int main()
{
	queue<int> q;
	int N;
	cin >> N;

	while (N--)
	{
		string s;
		cin >> s;
		
		if (s == "push")
		{
			int X;
			cin >> X;
			q.push(X);
		}
		else if (s == "pop")
		{
			if (q.empty()) cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (s == "size")
		{
			cout << q.size() << '\n';
		}
		else if (s == "empty")
		{
			if (q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (s == "front")
		{
			if (q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}
		else if (s == "back")
		{
			if (q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
		else
		{
			;
		}
	}
	return 0;
}
//
//push X : 정수 X를 큐에 넣는 연산이다.
//pop : 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//size : 큐에 들어있는 정수의 개수를 출력한다.
//empty : 큐가 비어있으면 1, 아니면 0을 출력한다.
//front : 큐의 가장 앞에 있는 정수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//back : 큐의 가장 뒤에 있는 정수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.