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

	//에러 발생.
	// erase() 쓸때는 항상 재할당 해줄 것.
	// erase()는 it위치 요소 삭제 후 그 다음 요소부터 이어가도록 설계됨.
	// insert()는 이후 바로 그 삽입된 위치에서 작업하려고 삽입된 요소의 반복자 반환. 인자로 넣은 반복자는 그대로.
}