// ���� ��
// 1. ������ ���ؼ� �ڷᱸ�� ����ų�� ���� ���ų� ���ﶧ ������ ��ġ�� ��������־�� �Ѵ�.
// 2. ����Ҷ� \n �ٿ��ֱ�.
// 3. stack�� range-based loop ��� �Ұ�

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

//push X : ���� X�� ���ÿ� �ִ� �����̴�.
//pop : ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//size : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
//empty : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//top : ������ ���� ���� �ִ� ������ ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.

// ù° �ٿ� �־����� ����� �� N(1 �� N �� 10, 000)�� �־�����.
// ��° �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����.
// �־����� ������ 1���� ũ�ų� ����, 100, 000���� �۰ų� ����.
// ������ �������� ���� ����� �־����� ���� ����.