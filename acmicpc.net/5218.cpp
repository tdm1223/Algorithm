// 5218. 알파벳 거리
// 2019.06.25
// 문자열 처리
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n-- > 0)
	{
		string a, b;
		cin >> a >> b;
		cout << "Distances: ";
		for (int i = 0; i < a.size(); i++)
		{
			if (b[i] >= a[i])
			{
				cout << b[i] - a[i] << " ";
			}
			else
			{
				cout << b[i] + 26 - a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
