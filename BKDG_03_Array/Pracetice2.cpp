#include <iostream>
#include <vector>

using namespace std;

int func2(int arr[], int N)
{
	int occur[101] = { 0 };
	// {1,23,50,77};
	for (int i = 0; i < N; i++)
	{
		occur[arr[i]] = 1;
		if (occur[100 - arr[i]] == 1) return 1; // 순서 바뀌어야 함. 왜? 50 -> 틀림.
	}
	
	// 지금 이 순간, 내가 확인하려는 조건은 과거의 정보만 이용해야 하는가, 아니면 현재의 정보까지 포함해야 하는가?

	return 0;
}