// 15351. 인생 점수
// 2021.12.25
// 구현
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n-- > 0)
    {
        string s;
        getline(cin, s);

        int score = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            score += s[i] - 'A' + 1;
        }

        if (score == 100)
        {
            cout << "PERFECT LIFE" << endl;
        }
        else
        {
            cout << score << endl;
        }
    }
    return 0;
}
