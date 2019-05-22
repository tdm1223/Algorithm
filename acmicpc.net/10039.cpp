// 10039. 평균 점수
// 2019.05.22
// 구현
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
	// 5명의 평균 출력
	cout << result / 5 << endl;
	return 0;
}
