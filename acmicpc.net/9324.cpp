// 9324. 진짜 메시지
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

bool isOK(string m)
{
	int arr[26] = { 0 };
	for (int i = 0; i < m.size(); i++)
	{
		arr[m[i]-'A']++;
		if (arr[m[i] - 'A'] % 3 == 0)//3�� �����϶�
		{
			if (m[i + 1] != m[i])
				return false;
			else
				++i;
		}

	}
	return true;
}
int main()
{
	int k;
	cin >> k;
	while (k > 0) {
		string message;
		cin >> message;

		if (isOK(message))
			cout << "OK" << endl;
		else
			cout << "FAKE" << endl;
		k--;
	}

}