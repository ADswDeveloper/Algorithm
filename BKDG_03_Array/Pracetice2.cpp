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
		if (occur[100 - arr[i]] == 1) return 1; // ���� �ٲ��� ��. ��? 50 -> Ʋ��.
	}
	
	// ���� �� ����, ���� Ȯ���Ϸ��� ������ ������ ������ �̿��ؾ� �ϴ°�, �ƴϸ� ������ �������� �����ؾ� �ϴ°�?

	return 0;
}