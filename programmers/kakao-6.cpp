// 길찾기 게임
// 2019.08.29
#include<vector>
#include<algorithm>

using namespace std;

vector<int> preOrder; // 전위 순회
vector<int> postOrder; // 후위 순회
// 트리를 구성하는 노드
class Node
{
public:
	Node * left = NULL;
	Node* right = NULL;
	int data;
	int x;
	int y;
	Node(pair<int, int> pos, int data)
	{
		x = pos.first;
		y = pos.second;
		this->data = data;
	}
};
// 이진 트리
class Tree
{
public:
	Node * root;
	Tree(pair<int, int> pos, int val)
	{
		root = new Node(pos, val);
	}
	void insertNode(Node* node, Node* root)
	{
		Node* parent = NULL;
		Node* current = root;
		while (current != NULL)
		{
			parent = current;
			if (node->x < parent->x)
			{
				current = current->left;
			}
			else {
				current = current->right;
			}
		}
		if (node->x < parent->x)
		{
			parent->left = node;
		}
		else {
			parent->right = node;
		}
	}

	void PreorderTree(Node* node)
	{
		if (node == NULL)
		{
			return;
		}
		preOrder.push_back(node->data);
		PreorderTree(node->left);
		PreorderTree(node->right);
	}

	void PostorderTree(Node* node)
	{
		if (node == NULL)
		{
			return;
		}
		PostorderTree(node->left);
		PostorderTree(node->right);
		postOrder.push_back(node->data);
	}
};
// 좌표 비교
bool compare(vector<int> &a, vector<int> &b)
{
	// y좌표가 같으면 x좌표 오름차순으로 정렬
	if (a[1] == b[1])
	{
		return a[0] < b[0];
	}
	// 기본은 y좌표에 대해 내림차순
	return a[1] > b[1];
}

vector<vector<int>> solution(vector<vector<int>> nodeinfo)
{
	vector<vector<int>> answer;
	for (int i = 0; i < nodeinfo.size(); i++)
	{
		// nodeinfo[i][0] : 노드의 x좌표
		// nodeinfo[i][1] : 노드의 y좌표
		// nodeinfo[i][2] : 노드의 data
		nodeinfo[i][2] = i + 1;
	}
	// 정렬 후 정렬된것을 바탕으로 트리를 구성하면 된다.
	sort(nodeinfo.begin(), nodeinfo.end(), compare);

	// 루트 추가
	Tree* root = new Tree({ nodeinfo[0][0],nodeinfo[0][1] }, nodeinfo[0][2]);
	// 루트를 제외한 나머지들 이진트리에 추가
	for (int i = 1; i < nodeinfo.size(); i++)
	{
		Node * x = new Node({ nodeinfo[i][0],nodeinfo[i][1] }, nodeinfo[i][2]);
		root->insertNode(x, root->root);
	}
	// 전위 순회
	root->PreorderTree(root->root);
	// 후위 순회
	root->PostorderTree(root->root);

	answer.push_back(preOrder);
	answer.push_back(postOrder);
	return answer;
}
