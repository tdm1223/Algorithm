// 1946. 신입 사원
// 2018.10.15
#include <iostream>

using namespace std;

int arr[100001];
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		cin >> n;
		//서류 순위로 알아서 정렬이 되도록 입력한다.
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			arr[a] = b;
		}

		int min = arr[1];
		int count = 1;
		//서류 순위 2위 부터 면접 점수를 비교하여 채용여부 결정
		for (int i = 2; i <= n; i++)
		{
			if (min > arr[i])
			{
				count++;
				min = arr[i];
			}
		}
		cout << count << endl;
	}
	
	return 0;
}
