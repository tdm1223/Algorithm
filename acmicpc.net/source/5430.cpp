// 5430. AC
// 2019.05.21
// 덱
#include<iostream>
#include<queue>
#include<string>
#include<sstream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	deque<int> dq;
	for (int i = 0; i < t; i++)
	{
		dq.clear();
		bool flag = true;
		bool errorFlag = false;
		string p;
		cin >> p;
		int n;
		cin >> n;

		string arr;
		cin >> arr;
		string tmp;
		if (arr.size() == 2)
		{
			dq.clear();
		}
		else
		{
			for (int i = 1; i < arr.size(); i++)
			{
				if (arr[i] == ',')
				{
					dq.push_back(stoi(tmp));
					tmp = "";
				}
				else if (i == arr.size() - 1)
				{
					dq.push_back(stoi(tmp));
				}
				else
				{
					tmp += arr[i];
				}
			}
		}

		for (int i = 0; i < p.size(); i++)
		{
			if (p[i] == 'R')
			{
				flag = !flag;
			}
			else
			{
				if (flag)
				{
					if (dq.size() == 0)
					{
						errorFlag = true;
						cout << "error" << endl;
						break;
					}
					dq.pop_front();
				}
				else
				{
					if (dq.size() == 0)
					{
						errorFlag = true;
						cout << "error" << endl;
						break;
					}
					dq.pop_back();
				}
			}
		}
		if (!dq.empty())
		{
			if (flag)
			{
				cout << "[";
				for (int i = 0; i < dq.size() - 1; i++)
				{
					cout << dq[i] << ",";
				}
				cout << dq[dq.size() - 1] << "]" << endl;
			}
			else
			{
				cout << "[";
				for (int i = dq.size()-1; i >=1; i--)
				{
					cout << dq[i] << ",";
				}
				cout << dq[0] << "]" << endl;
			}
		}
		else if(!errorFlag)
		{
			cout << "[]" << endl;
		}
	}
	return 0;
}
