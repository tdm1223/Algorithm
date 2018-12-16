// 5596. 시험 점수
// 2018.12.16
#include<iostream>

using namespace std;

int main()
{
	int arr1[4]; //민국이 점수
	int arr2[4]; //만세 점수
	int s = 0; //민국이 점수의 합
	int t = 0; //만세 점수의 합
	// 민국이 총점 계산
	for (int i = 0; i < 4; i++)
	{
		cin >> arr1[i];
		s += arr1[i];
	}
	// 만세 총점 계산
	for (int i = 0; i < 4; i++)
	{
		cin >> arr2[i];
		t += arr2[i];
	}

	// 큰 값 출력
	cout << (s >= t ? s : t) << endl;
	return 0;
}
