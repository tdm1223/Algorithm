// 1235. 학생 번호
// 2021.12.17
// 구현
#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> studentNumbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> studentNumbers[i];
    }

    int length = studentNumbers[0].size();
    set<string> s;
    int ans = 1;
    while (1)
    {
        s.clear();
        for (int i = 0; i < n; i++)
        {
            s.insert(studentNumbers[i].substr(length - ans));
        }

        if (s.size() == n)
        {
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
