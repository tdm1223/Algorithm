// 1543. 문서 검색
// 2021.07.04
// 브루트포스
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string original, toFind;
    getline(cin, original);
    getline(cin, toFind);

    int ans = 0;
    if (toFind.size() > original.size())
    {
        cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < original.size() - toFind.size() + 1; i++)
        {
            bool flag = true;
            for (int j = 0; j < toFind.size(); j++)
            {
                if (original[i + j] != toFind[j])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans++;
                i += toFind.size() - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
