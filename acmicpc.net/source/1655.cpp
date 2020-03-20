// 1655. 가운데를 말해요
// 2019.09.26
// 힙
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

priority_queue<int, vector<int>, less<int>> maxHeap; // 최대 힙
priority_queue<int, vector<int>, greater<int>> minHeap; // 최소 힙

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, num;
	cin >> n;

	while (n-- > 0)
	{
		cin >> num;
		// 두 힙의 크기가 같다면 최대힙에 추가
		if (maxHeap.size() == minHeap.size())
		{
			maxHeap.push(num);
		}
		// 그렇지 않다면 최소힙에 추가
		else
		{
			minHeap.push(num);
		}

		// 두 힙이 비어있지 않고 최대힙의 첫번째 원소가 최소힙의 첫번째 원소보다 클때 서로 위치를 바꿔준다.
		if (!maxHeap.empty() && !minHeap.empty() && (maxHeap.top() > minHeap.top()))
		{
			int max = maxHeap.top();
			int min = minHeap.top();
			maxHeap.pop();
			minHeap.pop();
			maxHeap.push(min);
			minHeap.push(max);
		}
		// 항상 최대힙의 첫번째 원소를 출력한다.
		cout << maxHeap.top() << "\n";
	}
	return 0;
}
