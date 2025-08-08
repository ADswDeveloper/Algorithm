//#include <iostream>
//using namespace std;
//
//int N = 0, M = 0;
//int arr[10];
//int isused[10];
//
//void func(int k)
//{
//	if (k == M)
//	{
//		for (int i = 0; i < M; i++)
//		{
//			cout << arr[i] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		if (isused[i] == 0)
//		{
//			arr[k] = i;
//			isused[i] = 1;
//			func(k + 1);
//			isused[i] = 0;
//		}
//	}
//}
//
//int main2()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N >> M;
//	func(0);
//	return 0;
//}
//
