// 6996.  애너그램
// 2021.03.31
// 구현, 문자열, 정렬
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string a;
    string b;
    string tmpA;
    string tmpB;
    while (t-- > 0)
    {
        a.clear();
        b.clear();
        cin >> a >> b;
        tmpA = a;
        tmpB = b;
        // 둘이 정렬해서 같은지 비교해보면 된다.
        sort(tmpA.begin(), tmpA.end());
        sort(tmpB.begin(), tmpB.end());
        if (tmpA == tmpB)
        {
            cout << a << " & " << b << " are anagrams." << endl;
        }
        else
        {
            cout << a << " & " << b << " are NOT anagrams." << endl;
        }
    }
    return 0;
}
