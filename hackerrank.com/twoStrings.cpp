//https://www.hackerrank.com/challenges/two-strings
string twoStrings(string s1, string s2) {
    string ans = "NO";
    int count = 0;
    for (int i=0;i<s2.size();i++)
    {
        if (s1.find(s2[i]) != string::npos)
        {
            count++;
            break;
        }
    }
    return (count > 0) ? "YES":  "NO";
}
