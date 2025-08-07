#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
char board[1001][1001];
int dist_f[1001][1001];
int dist_j[1001][1001];

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<pair<int, int>> Q;
	int jx, jy;
	int R, C;
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		fill(dist_f[i], dist_f[i] + C, -1);
		fill(dist_j[i], dist_j[i] + C, -1);
	}
	for (int i = 0; i < R; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < C; j++)
		{
			board[i][j] = s[j];

			if (board[i][j] == 'J')
			{
				jx = i;
				jy = j;
			}
			else if (board[i][j] == 'F')
			{
				dist_f[i][j] = 1;
				Q.push({ i,j });
			}
			else
			{
			}
		}
	}
	
	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			// ���� �� �� �ִ� �� , 
			// ������� -> �ε���, ��, ���, vis
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
			if (board[nx][ny] == '#' || dist_f[nx][ny] != -1) continue;
			
			dist_f[nx][ny] = dist_f[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}//dist_f �ϼ�
	
	dist_j[jx][jy] = 1;
	Q.push({ jx, jy });
	while (!Q.empty())
	{
		//������ �� �� �ִ� ��
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
			if (board[nx][ny] == '#' || dist_j[nx][ny] != -1) continue;
			if ((dist_f[nx][ny] > dist_j[cur.X][cur.Y] + 1) || (dist_f[nx][ny] == -1 && board[nx][ny] == '.'))
			{
				dist_j[nx][ny] = dist_j[cur.X][cur.Y] + 1;
				Q.push({ nx, ny });
			}
			
		}
	}

	// dist_j �����ڸ��� �ִ� ��� �˻��ؼ� 1 �̻��̸� ���. �ƴϸ� IMPOSSIBLE ���
	int MN = 1005;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (i == 0 || i == R - 1 || j == 0 || j == C - 1)
			{
				if(dist_j[i][j] != -1) MN = min(dist_j[i][j], MN);

			}
		}
	}
	if (MN == 1005) cout << "IMPOSSIBLE";
	else cout << MN;
	return 0;
}