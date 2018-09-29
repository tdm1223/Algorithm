//https://www.hackerrank.com/challenges/sherlock-and-valid-string
int arr[26];
string isValid(string s) {
    //case 1 : 글자수가 1개
    if(s.size()==1) return "YES";
    string ans = "NO";
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-'a']++;
    }
    vector<int> v;
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
            v.push_back(arr[i]);
    }
    //정렬
    sort(v.begin(),v.end());
    int sum = 0; //합을 저장할 수
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    //case2 : 모든 수가 같거나 맨 마지막 수만 다를 경우
    if(v[v.size()-1]*v.size()-sum==1 || v[v.size()-1]*v.size()-sum==0)
        ans = "YES";
    //case3: 처음이 1이고 나머지가 모두 같은 경우
    if(v[0]==1 && v[v.size()-1]*v.size()-sum==v[v.size()-1]-1)
        ans="YES";
    return ans;
}
