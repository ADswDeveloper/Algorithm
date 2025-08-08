#include <iostream>

using namespace std;

int func2(int n, int r, int c)
{
	if (n == 0) return 0;
	int half = pow(2, n - 1);

	if (0 <= r && r < half && 0 <= c && c < half) return func2(n - 1, r, c);
	else if (0 <= r && r < half && half <= c && c < 2 * half) return half * half + func2(n - 1, r, c - half);
	else if (half <= r && r < 2 * half && 0 <= c && c < half) return half * half * 2 + func2(n - 1, r - half, c);
	else return half * half * 3 + func2(n - 1, r - half, c - half);
	// (half <= r && r < 2 * half && half <= c && c < 2 * half)
}

int main()
{
	int n = 0, r = 0, c = 0;
	cin >> n >> r >> c;
	cout << func2(n, r, c);
	return 0;
}