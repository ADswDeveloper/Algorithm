#include <iostream>
#include <stack>

using namespace std;

int main1()
{	
	//������ Ǫ�� �� ž(�� ���� �б�)
	stack<int> s;
	s.push(10); // 10
	s.push(20); // 10 20
	s.push(30); // 10 20 30 
	
	cout << s.size() << '\n';
	if (s.empty()) cout << "S is Empty";
	else cout << "S is not empty\n";

	s.pop();
	cout << s.top() << '\n'; // 20
	s.pop();
	cout << s.top() << '\n';
	s.pop(); // empty

	if (s.empty()) cout << "S is Empty"; 
	else cout << "S is not empty\n";
	cout << s.top(); // runtime error �߻�
	
	return 0;
}