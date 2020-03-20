// 1919. 애너그램 만들기
// 2019.05.19
// 수학, 문자열 처리
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int arr1[26]; // 첫번째 문자열의 각 알파벳의 갯수가 저장될 배열
int arr2[26]; // 두번째 문자열의 각 알파벳의 갯수가 저장될 배열
int main()
{
	string a;
	string b;
	cin >> a >> b;

  //두 문자열을 정렬
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int count = 0;
	if (a == b)
	{
		cout << count << endl;
	}
	else
	{
		for (int i = 0; i < a.size(); i++)
		{
			arr1[a[i]-'a']++;
		}
		for (int i = 0; i < b.size(); i++)
		{
			arr2[b[i]-'a']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (arr1[i] != arr2[i]) // 알파벳 개수가 다르다면 큰거에서 작은걸 뺀 값을 더함
			{
				count += (max(arr1[i], arr2[i]) - min(arr1[i], arr2[i]));
			}
		}
		cout << count << endl;
	}
	return 0;
}
