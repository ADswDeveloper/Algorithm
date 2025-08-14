//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//int board1[10][10];
//int board2[10][10];
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//void upd(int x, int y, int dir)
//{
//    dir %= 4;
//    int nx = x;
//    int ny = y;
//    while (1)
//    {
//        // 벽, cctv
//        nx += dx[dir];
//        ny += dy[dir];
//
//        if (nx < 0 || nx >= N || ny < 0 || ny >= M) return;
//        if (board2[nx][ny] == 6) return;
//        if (board2[nx][ny] != 0 && board2[nx][ny] != 6) continue;
//        board2[nx][ny] = 7;
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector<pair<int, int>> cctv;
//    cin >> N >> M;
//    int cnt = 0;
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < M; j++)
//        {
//            cin >> board1[i][j];
//            if (board1[i][j] != 0 && board1[i][j] != 6) cctv.push_back({ i, j });
//            if (board1[i][j] == 0) cnt++;
//        }
//    }
//    
//    for (int ca = 0; ca < (1 << (2 * cctv.size())); ca++)
//    {
//        for (int i = 0; i < N; i++)
//        {
//            for (int j = 0; j < M; j++)
//            {
//                board2[i][j] = board1[i][j];
//            }
//        }
//        
//        int tmp = ca; 
//
//        for (int i = 0; i < cctv.size(); i++)
//        {
//            
//            int dir = tmp % 4;
//            tmp /= 4; //k 번째 cctv 방향 정했으면 다음 cctv 방향 정해주기 위해 /4 업데이트.
//            
//            int x = cctv[i].first;
//            int y = cctv[i].second;
//            int cctvCase = board1[x][y];
//            
//            if (cctvCase == 1)
//            {
//                upd(x, y, dir);
//            }
//            else if (cctvCase == 2)
//            {
//                upd(x, y, dir);
//                upd(x, y, dir + 2);
//            }
//            else if (cctvCase == 3)
//            {
//                upd(x, y, dir);
//                upd(x, y, dir + 1);
//            }
//            else if (cctvCase == 4)
//            {
//                upd(x, y, dir);
//                upd(x, y, dir + 1);
//                upd(x, y, dir + 2);
//            }
//            else
//            {
//                upd(x, y, dir);
//                upd(x, y, dir + 1);
//                upd(x, y, dir + 2);
//                upd(x, y, dir + 3);
//            }
//        }
//        
//        int localCnt = 0;
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < M; j++)
//            {
//                if (board2[i][j] == 0) localCnt++;
//            }
//        }
//        cnt = min(localCnt, cnt);
//
//    }
//    cout << cnt;
//    return 0;
//}
