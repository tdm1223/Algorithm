// 10825. 국영수
// 2019.05.22
// 정렬
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

// 학생 구조체 과목의 점수와 이름 저장
struct Student
{
public:
	string name;
	int korean;
	int english;
	int math;
	Student(string s, int a, int b, int c) :name(s), korean(a), english(b), math(c) {}
	Student() {}
};

// 주어진 조건대로 정렬하는 compare 함수
bool compare(Student& a, Student& b)
{
	if (a.korean > b.korean)
	{
		return true;
	}
	else if (a.korean == b.korean)
	{
		if (a.english < b.english)
		{
			return true;
		}
		else if (a.english == b.english)
		{
			if (a.math > b.math)
			{
				return true;
			}
			else if (a.math == b.math)
			{
				return a.name < b.name;
			}
		}
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<Student> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].name >> v[i].korean >> v[i].english >> v[i].math;
	}
	// 조건에 따라 정렬
	sort(v.begin(), v.end(), compare);
	// 결과 출력
	for (int i = 0; i < n; i++)
	{
		cout << v[i].name << "\n";
	}
	return 0;
}
