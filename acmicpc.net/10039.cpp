// 10039. 평균 점수
// 2018.10.15
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> student(5);
	int result = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> student[i];
		if (student[i] < 40)
		{
			student[i] = 40;
		}
		result += student[i];
	}

	cout << result / 5 << endl;
	return 0;
}
