// 5597. 과제 안 내신 분..?
// 2019.05.21
// 구현
#include<iostream>

using namespace std;

int num[31];
int arr[28];
int main()
{
	// 입력하여 num배열에 저장
	for (int i = 0; i < 28; i++)
	{
		cin >> arr[i];
		num[arr[i]] = 1;
	}
	// 과제 안낸사람 찾기
	for (int i = 1; i < 31; i++)
	{
		if (num[i] != 1)
		{
			cout << i << endl;
		}
	}
	return 0;
}
