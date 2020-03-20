// 1991. 트리 순회
// 2019.15.19
#include<iostream>

using namespace std;
// 트리를 나타내는 2차원 배열
int tree[26][2]; // 최대 26개의 원소, 2에는 leftchild와 rightchild가 저장됨
// 전위 순회 M L R
void PreOrder(int node)
{
	if (node == (int)('.' - 'A'))//자식이 없을 때
	{
		return;
	}
	cout << (char)(node + 'A');
	PreOrder(tree[node][0]);
	PreOrder(tree[node][1]);
}
// 중위 순회 L M R
void InOrder(int node)
{
	if (node == (int)('.' - 'A'))//자식이 없을 때
	{
		return;
	}
	InOrder(tree[node][0]);
	cout << (char)(node + 'A');
	InOrder(tree[node][1]);
}
// 후위 순회 L R M
void PostOrder(int node)
{
	if (node == (int)('.' - 'A'))//자식이 없을 때
	{
		return;
	}
	PostOrder(tree[node][0]);
	PostOrder(tree[node][1]);
	cout << (char)(node + 'A');
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char data, leftChild, rightChild;
		cin >> data >> leftChild >> rightChild;
		tree[data - 'A'][0] = leftChild - 'A';
		tree[data - 'A'][1] = rightChild - 'A';
	}

	PreOrder(0);
	cout << endl;

	InOrder(0);
	cout << endl;

	PostOrder(0);
	cout << endl;
	return 0;
}
