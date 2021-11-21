// 12605. 단어순서 뒤집기
// 2021.11.21
// 문자열
#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);

        stringstream stream;
        stream.str(s);

        vector<string> v;
        while (stream >> s)
        {
            v.push_back(s);
        }

        cout << "Case #" << i << ": ";
        for (int j = v.size() - 1; j >= 0; j--)
        {
            cout << v[j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
