// 10825. 국영수
// 2019.03.28
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

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
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++)
	{
		cout << v[i].name << "\n";
	}

	return 0;
}