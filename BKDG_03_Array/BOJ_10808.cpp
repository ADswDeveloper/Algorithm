#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	

	char s[100];
	cin >> s;
	
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	
	int alpha[26] = { 0 };
	for (int i = 0; i < len; i++)
	{
		int	idx = int(s[i] - 'a');
		alpha[idx] = alpha[idx] + 1;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << " ";
	}
	return 0;
	
}

int sol2()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	vector<int> alpha(26, 0);

	cin >> s;
	
	for (char ch : s)
	{
		alpha[int(ch - 'a')]++;
	}

	for (int e : alpha)
	{
		cout << e << " ";
	}
	return 0;
}