// 20499. Darius님 한타 안 함?
// 2021.10.11
// 문자열
#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

vector<string> split(string input, char delimiter)
{
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter))
    {
        answer.push_back(temp);
    }

    return answer;
}
int main()
{
    string s;
    cin >> s;
    vector<string> result = split(s, '/');
    int k = stoi(result[0]);
    int d = stoi(result[1]);
    int a = stoi(result[2]);

    if (k + a < d || d == 0)
    {
        cout << "hasu" << endl;
    }
    else
    {
        cout << "gosu" << endl;
    }
    return 0;
}
