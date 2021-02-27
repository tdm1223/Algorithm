// 17293. 맥주 99병
// 2021.02.28
// 입문용, 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int first = n;
    while (n >= 1)
    {
        if (n == 1)
        {
            cout << n << " bottle of beer on the wall, " << n << " bottle of beer." << endl;
            cout << "Take one down and pass it around, no more bottles of beer on the wall." << endl;
        }
        else
        {
            cout << n << " bottles of beer on the wall, " << n << " bottles of beer." << endl;
            cout << "Take one down and pass it around, " << (n - 1) << ((n - 1 == 1) ? " bottle" : " bottles") << " of beer on the wall." << endl;
        }
        cout << endl;
        n--;
    }
    cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
    cout << "Go to the store and buy some more, " << first << ((first - 0 == 1) ? " bottle" : " bottles") << " of beer on the wall." << endl;
    return 0;
}
