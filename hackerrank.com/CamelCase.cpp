// https://www.hackerrank.com/challenges/camelcase
int camelcase(string s)
{
    int ans = 1;
    // 대문자의 개수를 센다.
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            ans++;
        }
    }
    return ans;
}
