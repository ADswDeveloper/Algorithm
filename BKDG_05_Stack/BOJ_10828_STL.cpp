// ������
// 1. stl ���� �Ҵ��ϸ� �� ī���̷����(�޸� ����, ���� �� ����)
// 2. �����̳� �����(ex. ����, ť) -> ��Ģ�� ��Ű�� ���� �ּ����� ��ɸ� ����.

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	stack<int> stk;
	stack<int> copyStk;
	while (N--)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int num;
			cin >> num;
			stk.push(num);
		}
		else if (s == "pop")
		{
			if (stk.empty()) cout << "-1" << '\n';
			else
			{
				cout << stk.top() << '\n';
				stk.pop();
			}
		}
		else if (s == "size")
		{
			//for(int e : stk).. ��� �Ұ�.
			//int cnt = 0;
			//copyStk = stk;
			//while (!copyStk.empty())
			//{
			//	copyStk.pop();
			//	cnt++;
			//}
			//cout << cnt << '\n';
			cout << stk.size() << '\n'; 
		}
		else if (s == "empty")
		{
			if (stk.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (s == "top")
			0.
		{
			if (stk.empty()) cout << -1 << '\n';
			else cout << stk.top() << '\n';
		}
	}
}


//push X : ���� X�� ���ÿ� �ִ� �����̴�.
//pop : ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//size : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
//empty : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//top : ������ ���� ���� �ִ� ������ ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.

// ù° �ٿ� �־����� ����� �� N(1 �� N �� 10, 000)�� �־�����.
// ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����.
// �־����� ������ 1���� ũ�ų� ����, 100, 000���� �۰ų� ����.
// ������ �������� ���� ����� �־����� ���� ����.