// 1356. 유진수
// 2019.10.08
// 수학
#include<iostream>
#include<string>

using namespace std;

int main()
{
string s;
cin >> s;
bool flag = false;
for (int i = 1; i < s.size(); i++)
{
  string first = s.substr(0, i); // 0번째부터 i-1번째까지
  string second = s.substr(i); // i번째부터 끝까지
  int x = 1;
  int y = 1;
  // 왼쪽 곱
  for (int i = 0; i < first.size(); i++)
  {
    x *= (first[i] - '0');
  }
  // 오른쪽 곱
  for (int i = 0; i < second.size(); i++)
  {
    y *= (second[i] - '0');
  }
  // 둘이 같다면 유진수
  if (x == y)
  {
    flag = true;
    break;
  }
}

if (flag)
{
  cout << "YES" << endl;
}
else
{
  cout << "NO" << endl;
}
return 0;
}
