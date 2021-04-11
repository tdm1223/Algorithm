// 17249. 태보태보 총난타
// 2021.04.11
// 구현
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int left = 0;
    int right = 0;

    bool isLeft = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '@')
        {
            if (isLeft)
            {
                left++;
            }
            else
            {
                right++;
            }
        }
        else if (s[i] == '0')
        {
            isLeft = false;
        }
    }
    cout << left << " " << right << endl;
    return 0;
}
