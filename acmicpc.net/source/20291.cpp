// 20291. 파일 정리
// 2022.02.21
// 자료구조
#include<iostream>
#include<map>

using namespace std;

map<string, int> extensionMap;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int k = s.find('.');
        if (extensionMap.find(s.substr(k + 1)) == extensionMap.end())
        {
            extensionMap[s.substr(k + 1)] = 1;
        }
        else
        {
            extensionMap[s.substr(k + 1)]++;
        }
    }

    for (auto extension : extensionMap)
    {
        cout << extension.first << " " << extension.second << endl;
    }
    return 0;
}
