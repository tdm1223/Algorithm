// 5596. 시험 점수
#include <iostream>

using namespace std;

int main(void)
{
	int arr1[4]; //민국이 점수
	int arr2[4]; //만세 점수
	int s = 0; //민국이 점수의 합
	int t = 0; //만세 점수의 합
	for (int i = 0; i < 4; i++)
	{
		cin >> arr1[i];
		s += arr1[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> arr2[i];
		t += arr2[i];
	}

	cout << (s >= t ? s : t) << endl;
	return 0;
}
