#include <iostream>
#include <queue>
#include <string>

using namespace std;

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
			
		}
		else if (s == "size")
		{

		}
		else if (s == "empty")
		{

		}
		else if (s == "front")
		{

		}
		else if (s == "back")
		{
			
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