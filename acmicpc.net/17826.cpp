// 17826. 나의 학점은?
// 2019.11.09
// 입문용
#include<iostream>
#include<string>

using namespace std;

int scores[51];
int main()
{
    for (int i = 1; i <= 50; i++)
    {
        cin >> scores[i];
    }
    int score;
    cin >> score;
    int cnt = 0;
    for (int i = 1; i <= 50; i++)
    {
        if (score == scores[i])
        {
            cnt = i;
            break;
        }
    }
    string ans;
    if (cnt <= 5)
    {
        ans = "A+";
    }
    else if (cnt <= 15)
    {
        ans = "A0";
    }
    else if (cnt <= 30)
    {
        ans = "B+";
    }
    else if (cnt <= 35)
    {
        ans = "B0";
    }
    else if (cnt <= 45)
    {
        ans = "C+";
    }
    else if (cnt <= 48)
    {
        ans = "C0";
    }
    else
    {
        ans = "F";
    }
    cout << ans << endl;
	return 0;
}
