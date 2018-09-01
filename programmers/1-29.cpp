//시저 암호
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
   for (int i=0;i<s.size();i++)
   {
        if (s[i] == ' ')
        {
            continue;
        }

        char b = isupper(s[i]) ? 'A' : 'a';
        s[i] = b + (s[i]-b+n)%26;
    }
    return s;
}
