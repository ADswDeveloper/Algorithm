//#include <iostream>
//#include <queue>
//#include <algorithm>
//// 고려사항
//// 막혔으면 -1
//// 이미 다 익었으면 0
//using namespace std;
//int board[1000][1000];
//int vis[1000][1000];
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//#define X first
//#define Y second
//
//int main6()
//{
//	int M, N;
//	cin >> M >> N;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 0; i < 1000; i++)
//	{
//		for (int j = 0; j < 1000; j++)
//		{
//			vis[i][j] = -1;
//		}
//	}
//	queue<pair<int, int>> Q;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (board[i][j] == 1)
//			{
//				vis[i][j] = 0;
//				Q.push({ i, j });
//			}
//		}
//	}
//
//	while (!Q.empty())
//	{
//		pair<int, int> cur = Q.front();
//		Q.pop();
//
//		for (int dir = 0; dir < 4; dir++)
//		{
//			int nx = cur.X + dx[dir];
//			int ny = cur.Y + dy[dir];
//
//			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
//			if (board[nx][ny] != 0 || vis[nx][ny] != -1) continue;
//			
//			vis[nx][ny] = vis[cur.X][cur.Y] + 1;
//			Q.push({ nx, ny });
//		}
//
//	}
//	int MX = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			MX = max(MX, vis[i][j]);
//			if (vis[i][j] == -1 && board[i][j] == 0)
//			{
//				cout << -1;
//				return 0;
//			}
//		}
//	}
//	cout << MX;
//	return 0;
//}