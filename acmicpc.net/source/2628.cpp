// 2628. 종이 자르기
// 2021.06.07
// 정렬
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int t;
    cin >> t;

    vector<int> width;
    vector<int> height;
    width.push_back(0);
    width.push_back(m);

    height.push_back(0);
    height.push_back(n);

    for (int i = 0; i < t; i++)
    {
        int type, line;
        cin >> type >> line;

        if (type == 0)
        {
            width.push_back(line);
        }
        else
        {
            height.push_back(line);
        }
    }

    sort(width.begin(), width.end());
    sort(height.begin(), height.end());

    int maxWidth = 0;
    int maxHeight = 0;
    for (int i = 1; i < width.size(); i++)
    {
        maxWidth = max(maxWidth, width[i] - width[i - 1]);
    }

    for (int i = 1; i < height.size(); i++)
    {
        maxHeight = max(maxHeight, height[i] - height[i - 1]);
    }

    cout << maxWidth * maxHeight << endl;
    return 0;
}
