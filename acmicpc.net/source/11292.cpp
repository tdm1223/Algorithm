// 11292. 키 큰 사람
// 2021.09.05
// 정렬
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }


        string s;
        float h;
        float maxValue = -1.0f;
        vector<string> ansVector;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> h;
            if (maxValue < h)
            {
                ansVector.clear();
                ansVector.push_back(s);
                maxValue = h;
            }
            else if (maxValue <= h)
            {
                ansVector.push_back(s);
            }
        }

        for (int i = 0; i < ansVector.size(); i++)
        {
            cout << ansVector[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
