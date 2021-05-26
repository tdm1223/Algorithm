// 두 개 뽑아서 더하기
// 2021.05.26
#include<vector>
#include<set>

using namespace std;

set<int> sets;
vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=0;i<numbers.size();i++)
    {
        for(int j=i+1;j<numbers.size();j++)
        {
            sets.insert(numbers[i]+numbers[j]);
        }
    }

    for(auto num : sets)
    {
        answer.push_back(num);
    }
    return answer;
}
