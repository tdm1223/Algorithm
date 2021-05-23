// 3059. 등장하지 않는 문자의 합
// 2021.05.23
// 구현
#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
    const int sum = 2015;
    int t;
    cin >> t;
    string s;
    set<int> st;

    while (t-- > 0)
    {
        s.clear();
        st.clear();
        cin >> s;

        int kSum = sum;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
        }

        for (auto num : st)
        {
            kSum -= num;
        }
        cout << kSum << endl;
    }
    return 0;
}
