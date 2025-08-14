#include <iostream>

using namespace std;

int N, M, K;
int note[42][42];
int paper[12][12];
int R, C;

bool pastable(int x, int y)
{
	// x, y는 외부에서 들어옴.
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (note[x + i][y + j] == 1 && paper[i][j] == 1)	return false;
		}
	}
	
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			// 더 세부적으로 따졌어야 했음.

			if(paper[i][j] == 1) note[x + i][y + j] = 1;
		}
	}
	return true;
}
void rotate()
{
	int tmp[12][12];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			tmp[i][j] = paper[i][j];
		}
	}
	// paper에는 기존 스티커값 남아있으나, C, R 내에서만 접근할거라 상관없음
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < R; j++)
		{
			paper[i][j] = tmp[R - 1 - j][i];
		}
	}
	swap(R, C);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M >> K;
	while (K--)
	{
		cin >> R >> C;
		for (int i = 0; i < R; i++)
		{
			for (int j = 0; j < C; j++)
			{
				cin >> paper[i][j];
			}
		}

		for (int i = 0; i < 4; i++)
		{
			bool isStick = false;
			for (int x = 0; x <= N - R; x++)
			{
				for (int y = 0; y <= M - C; y++)
				{
					if (pastable(x, y))
					{
						isStick = true;
						break;
					}
					else
					{
						continue;
					}
				}
				if (isStick) break;
			}
			if (isStick) break;
			rotate();
		}
	}
	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (note[i][j] == 1) cnt++;
		}
	}
	cout << cnt;
	return 0;
}