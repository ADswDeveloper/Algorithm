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
//push X : ���� X�� ť�� �ִ� �����̴�.
//pop : ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//size : ť�� ����ִ� ������ ������ ����Ѵ�.
//empty : ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//front : ť�� ���� �տ� �ִ� ������ ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//back : ť�� ���� �ڿ� �ִ� ������ ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.