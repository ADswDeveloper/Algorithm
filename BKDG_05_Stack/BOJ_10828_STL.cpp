// 한줄평
// 1. stl 끼리 할당하면 딥 카피이루어짐(메모리 따로, 내용 다 복사)
// 2. 컨테이너 어댑터(ex. 스택, 큐) -> 규칙을 지키기 위한 최소한의 기능만 제공.

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
			//for(int e : stk).. 사용 불가.
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


//push X : 정수 X를 스택에 넣는 연산이다.
//pop : 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
//size : 스택에 들어있는 정수의 개수를 출력한다.
//empty : 스택이 비어있으면 1, 아니면 0을 출력한다.
//top : 스택의 가장 위에 있는 정수를 출력한다.만약 스택에 들어있는 정수가 없는 경우에는 - 1을 출력한다.

// 첫째 줄에 주어지는 명령의 수 N(1 ≤ N ≤ 10, 000)이 주어진다.
// 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다.
// 주어지는 정수는 1보다 크거나 같고, 100, 000보다 작거나 같다.
// 문제에 나와있지 않은 명령이 주어지는 경우는 없다.