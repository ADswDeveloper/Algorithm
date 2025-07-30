#include <iostream>
#include <vector>
#include <string>

//swap -> call by value, call by reference ���� �̿�
using namespace std;
void swap2(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
// ������. reference -> ������ �� �ٸ� �̸��� ����.
// ������ �������� ���� ������ ��ü�Ѵٰ� �����ϸ� ��. null ptr ���� ���ϰ� �ϴ� �з�����.
void swap3(int& a, int& b) // a�� b�� int reference
{
    int tmp = a; 
    a = b; // �̷��� ��� ������ �ٲ�.
    b = tmp;
}

// STL ->  c++ ���̺귯��
// STL�� �Լ����ڿ� ������ ����üó�� �����ؼ� ����.

// STL �Լ� ���ڷ� �ѱ涧 -> �ϱ�ó�� �� ���Ҷ�.(�ٲٱ� X)
// �ð� ���⵵ O(N) -> v1 �����ؼ��׷�.
bool cmp1(vector<int> v1, vector<int> v2, int idx)
{
    return v1[idx] < v2[idx];
}

// �ð� ���⵵ O(1) -> ���纻 ������ �ʰ� vector<int>�� reference�� ����, ���� ����� �ּ������� �Ѿ�� �ð����⵵�� O(1)
bool cmp1(vector<int>& v1, vector<int>& v2, int idx)
{
    return v1[idx] < v2[idx];
}



int main1()
{
// ǥ�� �����
// 1. ������ ���Ե� ���ڿ� �Է¹޾ƾ��Ҷ� -> (c++ string &) getline �Լ� �������. (cin, scanf ���� ����)
    string s;
    getline(cin, s);
    cout << s;

// 2. cin/cout ���� Ȯ������ �� ��ɾ� �����ؾߵ�. ios::sync_with_stdio(0), cin.tie(0)
// ���ڴ� C stream�� C++ Stream ����ȭ ����.(�� ? ���� c++ stream �� ���Ŵϱ�)
// ���ڴ� ,,, �츮 ����½� ���۶�� ���� ��ħ. �츮�� ����°� �ܼ� ���̿� ���۸� ��ħ. 
// ä�� ����Ʈ�� ��¸� ���� ������, ���� cin ��� ���� �� cout ���� ����ʿ� ����. �׷��� ���ִ� �ڵ尡 cin.tie(0) ��. 
 
//3.endl; ��������. ���� ���� ��� �� ���� ����� ���ε� �߰� �߰� ���� ����� ��� �� �ʿ� ���� ����. �ٹٲ� �ʿ��ϸ� ���� ���� ����ϱ�.
    return 0;
}


