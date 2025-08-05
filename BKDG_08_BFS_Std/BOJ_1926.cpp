// 이중 for문 시간 복잡도?

//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int board[500][500] = { 0 };
//int vis[500][500] = { 0 };
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//#define X first
//#define Y second
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> board[i][j];
//		}
//	}
//
//	
//	queue<pair<int, int>> Q;
//	int cnt = 0;
//	int maxArea = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			int area = 0;
//			if (board[i][j] == 1 && vis[i][j] == 0)
//			{
//				cnt++;
//				vis[i][j] = 1;
//				Q.push({ i,j });
//				area++;
//
//				while (!Q.empty())
//				{
//					pair<int, int> cur = Q.front();
//					Q.pop();
//
//					for (int dir = 0; dir < 4; dir++)
//					{
//						int nx = cur.X + dx[dir];
//						int ny = cur.Y + dy[dir];
//
//						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
//						if (vis[nx][ny] == 1 || board[nx][ny] == 0) continue;
//
//						vis[nx][ny] = 1;
//						Q.push({ nx,ny });
//						area++;
//					}
//				}
//				maxArea = max(area, maxArea);
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//	cout << cnt << '\n';
//	cout << maxArea;
//
//	return 0;
//}

// 뺄때 vis 표시해주면 중복으로 큐에 들어가는 경우 생김.