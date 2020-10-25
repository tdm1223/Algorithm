// 1672. DNA 해독
// 2020.10.25
// 구현
#include<iostream>
#include<string>

using namespace std;

char Mapping(char x, char y)
{
    char ans;
    switch (x)
    {
    case 'A':
        switch (y)
        {
        case 'A':
            ans = 'A';
            break;
        case 'G':
            ans = 'C';
            break;
        case 'C':
            ans = 'A';
            break;
        case 'T':
            ans = 'G';
            break;
        }
        break;
    case 'G':
        switch (y)
        {
        case 'A':
            ans = 'C';
            break;
        case 'G':
            ans = 'G';
            break;
        case 'C':
            ans = 'T';
            break;
        case 'T':
            ans = 'A';
            break;
        }
        break;
    case 'C':
        switch (y)
        {
        case 'A':
            ans = 'A';
            break;
        case 'G':
            ans = 'T';
            break;
        case 'C':
            ans = 'C';
            break;
        case 'T':
            ans = 'G';
            break;
        }
        break;
    case 'T':
        switch (y)
        {
        case 'A':
            ans = 'G';
            break;
        case 'G':
            ans = 'A';
            break;
        case 'C':
            ans = 'G';
            break;
        case 'T':
            ans = 'T';
            break;
        }
        break;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    n--;
    string dna;
    cin >> dna;
    while (n-- > 0)
    {
        char x = dna[dna.size() - 1];
        char y = dna[dna.size() - 2];

        dna = dna.substr(0, dna.size() - 2);
        dna += Mapping(x, y);
    }
    cout << dna << endl;
    return 0;
}
