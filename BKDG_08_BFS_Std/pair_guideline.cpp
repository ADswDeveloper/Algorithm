#include <iostream>

using namespace std;

int main9(void)
{
	pair<int, int> t1 = make_pair(3, 2); 
	pair<int, int> t2 = { 2,3 };

	cout << t2.first << ' ' << t2.second << '\n';
	if (t2 < t1) cout << "t2 < t1" << '\n'; // .first ���� �� �� .second ��, first ������ second ���ϰ� second�� ������ ���� ������ ��.
	else if (t2 > t1) cout << "false" << '\n';
	else cout << "same" << '\n';

	return 0;
}