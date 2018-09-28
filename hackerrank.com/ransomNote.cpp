//https://www.hackerrank.com/challenges/ctci-ransom-note
void checkMagazine(vector<string> magazine, vector<string> note)
{
    string ans = "Yes";
    map<string, int> words;
    for (int i=0;i<magazine.size();i++)
        words[magazine[i]]++;
    for (int i=0;i<note.size();i++)
    {
        if (words[note[i]]>0)
            words[note[i]]--;
        else
            ans="No";
    }
    cout<<ans<<endl;
}
