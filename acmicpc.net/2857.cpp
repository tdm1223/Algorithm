// 2857. FBI
// 2019.06.25
// 문자열 처리(find함수)
#include<iostream>
#include<string>
#include<vector>

using namespace std;

const string FBI = "FBI";
string s;
vector<int> ans;
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		cin >> s;
		if (s.find(FBI) != string::npos) {
			ans.push_back(i);
		}
	}

	if (ans.size() == 0)
	{
		cout << "HE GOT AWAY!" << endl;
	}
	else
	{
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
