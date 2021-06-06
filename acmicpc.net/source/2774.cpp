// 2774. 아름다운 수
// 2021.06.06
// 구현
#include<iostream>
#include<string>

using namespace std;

int nums[10];
int main()
{
    int n;
    string s;
    int ans;
    cin >> n;
    while (n-- > 0)
    {
        for (int i = 0; i < 10; i++)
        {
            nums[i] = 0;
        }

        s.clear();
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            nums[s[i] - '0']++;
        }

        ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if (nums[i] != 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
