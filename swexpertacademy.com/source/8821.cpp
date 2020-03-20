// 8821. 적고 지우기
// 2019.12.11
#include<iostream>
#include<string>

using namespace std;

int arr[10];
int main()
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        for(int i=0;i<10;i++)
        {
            arr[i]=0;
        }
		string s;
        cin>>s;
        int ans = 0;
		for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]-'0']==1)
            {
                arr[s[i]-'0']=0;
            }
            else if(arr[s[i]-'0']==0)
            {
                arr[s[i]-'0']=1;
            }
        }
    	for(int i=0;i<10;i++)
        {
            if(arr[i]==1)
            {
                ans++;
            }
        }
        cout<<"#"<<test_case<<" "<<ans<<"\n";
	}
	return 0;
}
