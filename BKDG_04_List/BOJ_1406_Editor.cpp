#include <list>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main7()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int M;
	cin >> s >> M;
	cin.ignore(); // getline ���ٰŸ� �� ���ֱ�
	list<char> alpha(s.begin(),s.end()); // �ʱ�ȭ �Ҷ� �ϵ簡..
	auto it = alpha.end(); // Ŀ�� �ʱⰪ �Ҵ�. ������������ �ʱ�ȭ �Ǹ� �ȵ�. ���� Ŀ�� ��ġ �����س�����.
	
	//for(char ch : e){
	//alpha.push_back(ch);}
	
	while (M--)
	{
		string command;
		getline(cin, command);
		
		for (char e : command)
		{
			if (e == 'P')
			{
				string p;
				char ch;
				istringstream iss(command);
				iss >> p;
				iss >> ch;

				alpha.insert(it, ch);
				
				
			}
			else if (e == 'L')
			{
				if (it == alpha.begin()) continue;
				it--;
			}
			else if (e == 'D')
			{
				if (it == alpha.end()) continue;
				it++;
			}
			else if (e == 'B')
			{
				if (it == alpha.begin()) continue;
				it--;
				it = alpha.erase(it);
			}
		}
	

	}

	for (char c : alpha)
	{
		cout << c;
	}
	return 0;
}

//erase �� ����� ���� ���� ����Ű�� it ��ȯ
// insert�� �߰��ϰ� 


int main9()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string init;
	cin >> init;
	
	list<char> L;
	//list<char> L(L.begin(), L.end());
	for (auto c : init) L.push_back(c);
	auto cursor = L.end(); // �ݺ��ڴ� auto�� ���̵� ����
	int q;
	cin >> q;
	
	while (q--)
	{
		char op;
		cin >> op;

		if (op == 'P')
		{
			char add;
			cin >> add;
			L.insert(cursor, add);
		}
		else if (op == 'L')
		{
			if (cursor != L.begin()) cursor--; // it==L.begin() �϶� continue �ϴ°ͺ��� �̰� �� ���. ����ó��.
		}
		else // 'B'
		{
			;
		}
	}

	for (auto c : L) cout << c; // �б� ����.
	return 0;
}