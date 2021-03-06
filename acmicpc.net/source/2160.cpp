// 2160. 그림 비교
// 2019.05.19
// 시뮬레이션
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

// 그림을 나타내는 구조체
struct Drawing
{
	string s[7];
};
int main()
{
	int n;
	cin >> n;
	vector<Drawing> v;
	for (int i = 0; i < n; i++)
	{
		Drawing drawing;
		for (int j = 0; j < 5; j++)
		{
			cin >> drawing.s[j];
		}
		v.push_back(drawing);
	}

	int maxCount = 0;
	int first = 0;
	int second = 0;
	for (int i = 0; i < v.size()-1; i++)
	{
		for (int j = i+1; j < v.size(); j++)
		{
			int count = 0;
			for (int k = 0; k < 5; k++)
			{
				for (int l = 0; l < 7; l++)
				{
					// 값이 같다면 비슷함의 정도 증가
					if (v[i].s[k][l] == v[j].s[k][l])
					{
						count++;
					}
				}
			}
			// 비슷함의 정도가 기존의 값보다 크면 두개의 인덱스를 차례로 저장
			if (maxCount < count)
			{
				maxCount = count;
				first = i + 1;
				second = j + 1;
			}
		}
	}
	cout << first << " " << second << endl;
	return 0;
}
