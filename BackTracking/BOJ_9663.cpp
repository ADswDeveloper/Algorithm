#include <iostream>
//#include <bits/stdc++.h>

using namespace std;
int N, cnt;
int isused1[30];
int isused2[30];
int isused3[30];

void queen(int k)
{

	if (k == N)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (isused1[i] || isused2[k + i]|| isused3[k - i + N - 1]) continue;
		isused1[i] = 1;
		isused2[k + i] = 1;
		isused3[k - i + N - 1] = 1;

		queen(k + 1);

		isused1[i] = 0;
		isused2[k + i] = 0;
		isused3[k - i + N - 1] = 0;
	}
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	queen(0);
	cout << cnt;
	return 0;
}