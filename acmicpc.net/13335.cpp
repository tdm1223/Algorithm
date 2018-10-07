// 13335. 트럭
#include<string>
#include<vector>
#include<queue>
#include<iostream>

using namespace std;

queue<int> q;

int main()
{
	int n, w, L;
	//n : 트럭의 수 w : 다리의 길이 L : 다리의 최대 하중
	cin >> n >> w >> L;
	vector<int> truck(n);
	for (int i = 0; i < n; i++)
	{
		cin >> truck[i];
	}

	int bridge_weight = 0;
	int time = 0;
	for (int i = 0; i < truck.size(); i++)
	{
		while (1)
		{
			if (q.empty())//다리에 아무것도 없을때
			{
				q.push(truck[i]);//다리에 현재 트럭 추가
				time++;//시간 추가
				bridge_weight += truck[i];//총 무게 추가
				break;
			}
			else if (q.size() == w)//끝에 도달
			{
				bridge_weight -= q.front();// 총 무게를 감소시켜줌
				q.pop();//큐에서 트럭 제거
			}
			else
			{
				if (bridge_weight + truck[i] > L) // 대기중인 트럭까지 올라갔을때 트럭이 다리의 무게를 초과할 때
				{
					q.push(0);//무게에 영향이 없는 0을 넣어줌
					time++;//시간 증가
				}
				else
				{
					//큐가 비었을 때랑 동일
					q.push(truck[i]);
					time++;
					bridge_weight += truck[i];
					break;
				}
			}
		}
	}

	//총 시간 + 마지막 트럭 건너는 시간(다리의 길이)
	cout << time + w << endl;

	return 0;
}
