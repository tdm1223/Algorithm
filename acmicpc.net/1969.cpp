// 1969. DNA
// 2018.11.27
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int alpa[26];//알파벳 개수 저장
void Init()
{
	for (int i = 0; i < 26; i++)
	{
		alpa[i] = 0;
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	string ansString="";
	for (int i = 0; i < m; i++) //  자릿수에 대해 계산
	{
		Init(); // 알파벳 개수 초기화
		for (int j = 0; j < v.size(); j++) // v[0]부터 v[v.size()-1]까지
		{
			alpa[(int)(v[j][i] - 'A')]++;
		}
		int tmp = 0;
		char answer;
		for (int j = 0; j < 26; j++)
		{
			if (alpa[j] > tmp)
			{
				tmp = alpa[j];
				answer = j + 'A'; // 값이 가장큰 인덱스 + 'A'의 값을 답에 붙여줌
			}
		}
		ansString += answer;
	}

	// ansString에 대해 Hamming Distance의 합을 구하는 과정
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			if (ansString[i] != v[j][i])
			{
				count++;
			}
		}
	}
	cout << ansString << endl << count << endl;
	return 0;
}
