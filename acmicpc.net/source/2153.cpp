// 2153. 소수 단어
// 2020.07.03
// 수학
#include<iostream>
#include<string>

using namespace std;

int PrimeArray[1051];

void PrimeCheck()
{
    for (int i = 2; i <= 1050; i++)
    {
        PrimeArray[i] = 1;
    }

    for (int i = 2; i * i <= 1050; i++)
    {
        if (PrimeArray[i])
        {
            for (int j = i * i; j <= 1050; j += i)
            {
                PrimeArray[j] = false;
            }
        }
    }
}

int main()
{
    string s;
    cin >> s;

    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            num += s[i] - 'a' + 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            num += s[i] - 'A' + 27;
        }
    }
    PrimeCheck();
    if (PrimeArray[num] == 1 || num == 1)
    {
        cout << "It is a prime word." << endl;
    }
    else
    {
        cout << "It is not a prime word." << endl;
    }
    return 0;
}
