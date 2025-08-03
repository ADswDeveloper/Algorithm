#include <string>
#include <iostream>
#include <list>
using namespace std;
int main()
{
	string s;
	cin >> s; // abc

	list<char> L;
	for (auto e : s) L.push_back(e);
	auto it = L.end();
	it--;
	it--;
	L.erase(it);
	L.insert(it, 'x'); // axc
	
	for (auto e : L) cout << e;
	return 0;

	//���� �߻�.
	// erase() ������ �׻� ���Ҵ� ���� ��.
	// erase()�� it��ġ ��� ���� �� �� ���� ��Һ��� �̾���� �����.
	// insert()�� ���� �ٷ� �� ���Ե� ��ġ���� �۾��Ϸ��� ���Ե� ����� �ݺ��� ��ȯ. ���ڷ� ���� �ݺ��ڴ� �״��.
}