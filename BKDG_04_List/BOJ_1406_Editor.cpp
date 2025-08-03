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
	cin.ignore(); // getline 써줄거면 꼭 써주기
	list<char> alpha(s.begin(),s.end()); // 초기화 할때 하든가..
	auto it = alpha.end(); // 커서 초기값 할당. 루프돌때마다 초기화 되면 안됨. 이전 커서 위치 저장해놔야함.
	
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

//erase 는 지우고 다음 공간 가르키는 it 반환
// insert는 추가하고 


int main9()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string init;
	cin >> init;
	
	list<char> L;
	//list<char> L(L.begin(), L.end());
	for (auto c : init) L.push_back(c);
	auto cursor = L.end(); // 반복자는 auto로 많이들 선언
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
			if (cursor != L.begin()) cursor--; // it==L.begin() 일때 continue 하는것보다 이게 더 깔끔. 예외처리.
		}
		else // 'B'
		{
			;
		}
	}

	for (auto c : L) cout << c; // 읽기 전용.
	return 0;
}