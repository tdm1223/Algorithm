// 1296. 팀 이름 정하기
// 2021.12.12
// 구현
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void Check(string name, vector<int>& v)
{
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] == 'L')
        {
            v[0]++;
        }
        else if (name[i] == 'O')
        {
            v[1]++;
        }
        else if (name[i] == 'V')
        {
            v[2]++;
        }
        else if (name[i] == 'E')
        {
            v[3]++;
        }
    }
}

int main()
{
    int n;
    string name;
    int num = 0;
    int maxNum = -1; string ans;
    cin >> name;
    vector<int> yLove(4);
    vector<int> tName(4);
    Check(name, yLove);
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < tName.size(); i++)
        {
            tName[i] = 0;
        }

        cin >> name;
        Check(name, tName);

        int L = yLove[0] + tName[0];
        int O = yLove[1] + tName[1];
        int V = yLove[2] + tName[2];
        int E = yLove[3] + tName[3];

        num = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
        if (maxNum < num)
        {
            maxNum = num;
            ans = name;
        }
        else if (maxNum == num)
        {
            if (ans > name)
            {
                ans = name;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
