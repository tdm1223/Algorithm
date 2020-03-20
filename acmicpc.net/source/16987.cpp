// 16987. 계란으로 계란치기
// 2019.05.22
// 브루트 포스
#include<iostream>
#include<algorithm>

using namespace std;

int n;
egg eggs[9];
int realAns;
int ans;

struct egg
{
	int index; // 계란 번호
	int s; // 내구도
	int w; // 무게
	bool flag; //깨짐유무
	egg(int index, int s, int w, int flag) :index(index), s(s), w(w), flag(flag) {}
	egg() {}
};

// a달걀로 b를 때림
void Attack(egg& a, egg& b)
{
	a.s -= b.w;
	b.s -= a.w;
	if (a.s <= 0)
	{
		a.flag = true;
		ans++;
	}
	if (b.s <= 0)
	{
		b.flag = true;
		ans++;
	}
}

void Simulate(int cnt)
{
	if (cnt == n)
	{
		if (realAns < ans)
		{
			realAns = ans;
		}
		return;
	}

	// 현재 픽한 달걀이 깨지지 않았을 경우
	if (eggs[cnt].flag == false)
	{
		for (int i = 0; i < n; i++)
		{
			if (!eggs[i].flag && i != cnt)
			{

				Attack(eggs[cnt], eggs[i]);
				Simulate(cnt + 1);
				if (eggs[cnt].s <= 0)
				{
					eggs[cnt].flag = false;
					ans--;
				}
				if (eggs[i].s <= 0)
				{
					eggs[i].flag = false;
					ans--;
				}
				eggs[cnt].s += eggs[i].w;
				eggs[i].s += eggs[cnt].w;
			}
			// 치려는 달걀이 깨져있을때
			else if (eggs[i].flag && i != cnt)
			{
				Simulate(cnt + 1);
			}

		}
	}
	// 현재 픽한 달걀이 깨졌을 경우
	else
	{
		Simulate(cnt + 1);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int s, w;
		cin >> s >> w;
		eggs[i] = egg(i, s, w, false);
	}

	Simulate(0);
	cout << realAns << endl;
	return 0;
}
