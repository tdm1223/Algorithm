// 7662. 이중 우선순위 큐
#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	char ch;
	int k;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		multiset<int> ms;

		for (int i = 0; i<n; i++)
		{
			cin >> ch >> k;
			if (ch == 'I')
			{
				ms.insert(k);
			}
			else if (!ms.empty())
			{
				if (k < 0)
					ms.erase(ms.begin());
				else
					ms.erase(--ms.end());

			}
		}

		if (ms.empty())
			cout << "EMPTY" << endl;
		else
			cout << *ms.rbegin() << " " << *ms.begin() << endl;
	}
	return 0;
}
