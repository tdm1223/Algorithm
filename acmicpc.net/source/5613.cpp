// 5613. 계산기 프로그램
// 2019.09.13
// 구현
#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> v;
	while (1)
	{
		string s;
		cin >> s;
		if (s == "=")
		{
			v.push_back("=");
			break;
		}
		v.push_back(s);
	}

	stack<int> st;
	for (int i = 0; i < v.size(); i++)
	{
		//cout << v[i] << endl;
		if (v[i] == "+")
		{
			int first = st.top();
			int second = stoi(v[i + 1]);
			st.push(first + second);
			i++;
		}
		else if (v[i] == "-")
		{
			int first = st.top();
			int second = stoi(v[i + 1]);
			st.push(first - second);
			i++;
		}
		else if (v[i] == "*")
		{
			int first = st.top();
			int second = stoi(v[i + 1]);
			st.push(first * second);
			i++;
		}
		else if (v[i] == "/")
		{
			int first = st.top();
			int second = stoi(v[i + 1]);
			st.push(first / second);
			i++;
		}
		else if (v[i] == "=")
		{
			cout << st.top() << endl;
			break;
		}
		else
		{
			st.push(stoi(v[i]));
		}
	}
	return 0;
}
