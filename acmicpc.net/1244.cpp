// 1244. 스위치 켜고 끄기
// 2019.04.05
#include<iostream>
#include<algorithm>

using namespace std;

int switches[101];
// 꺼져있는건 키고 켜져있는건 끔
int OnOff(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> switches[i];
	}

	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int flag, num;
		cin >> flag >> num;
		if (flag == 1) // 남학생
		{
			int mul = num;
			while (num <= n)
			{
				switches[num] = OnOff(switches[num]);
				num += mul;
			}
		}
		else // 여학생
		{
			int left = num + 1;
			int right = num - 1;
			switches[num] = OnOff(switches[num]);
			while (1)
			{
				if (left > n || right <= 0)
				{
					break;
				}
				if (switches[left] == switches[right])
				{
					switches[left] = OnOff(switches[left]);
					switches[right] = OnOff(switches[right]);
				}
				else
				{
					break;
				}
				left++;
				right--;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << switches[i] << " ";
		if (i % 20 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}
