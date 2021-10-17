// 1672. DNA 해독
// 2021.10.17
// 구현
#include<iostream>
#include<string>

using namespace std;

int n;
string DNA = "ACAGCGTAATCGGAGT";

char Mapping(char a, char b)
{
    int idx = (a == 'A' ? 0 : a == 'G' ? 1 : a == 'C' ? 2 : 3);
    int idx2 = (b == 'A' ? 0 : b == 'G' ? 1 : b == 'C' ? 2 : 3);

    return DNA[idx * 4 + idx2];
}

int main()
{
    string s;
    cin >> n >> s;
    for (int i = s.size() - 2; i >= 0; i--)
    {
        s[i] = Mapping(s[i], s[i + 1]);
    }
    cout << s[0] << "\n";
    return 0;
}
