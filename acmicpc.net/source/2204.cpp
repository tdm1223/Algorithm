// 2204. 도비의 난독증 테스트
// 2021.06.10
// 문자열
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    string s;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        string ans = "";
        cin >> ans;
        for (int i = 1; i < n; i++)
        {
            cin >> s;
            string sToLower = s;
            string ansToLower = ans;

            transform(sToLower.begin(), sToLower.end(), sToLower.begin(), ::tolower);
            transform(ansToLower.begin(), ansToLower.end(), ansToLower.begin(), ::tolower);
            if (ansToLower > sToLower)
            {
                ans = s;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
