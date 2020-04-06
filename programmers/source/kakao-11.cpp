// 튜플
// 2020.04.07
#include<string>
#include<vector>

using namespace std;

vector<int> solution(string s)
{
    vector<vector<int>> tuple;
    vector<int> answer;
    // 입력에서 숫자 파싱
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == '{')
        {
            vector<int> number;
            string tmp = "";
            while (1)
            {
                i++;
                if (s[i] == '}')
                {
                    number.push_back(stoi(tmp));
                    tuple.push_back(number);
                    break;
                }
                else if (s[i] == ',')
                {
                    number.push_back(stoi(tmp));
                    tmp = "";
                }
                else
                {
                    tmp += s[i];
                }
            }
        }
    }

    // 문제에서 주어진 성질대로 튜플 찾는 과정
    // 크기가 작은거부터 차례대로 진행한다.
    // {2}, {2, 1} {2, 1, 3} {2, 1, 3, 4} 순으로 정렬 후
    // 순서대로 다음것을 넣어보면서 없는 숫자를 찾아 추가하며 튜플을 완성한다.
    for (int i = 1; i <= tuple.size(); i++)
    {
        for (int j = 0; j < tuple.size(); j++)
        {
            if (tuple[j].size() == i)
            {
                if (i == 1)
                {
                    answer.push_back(tuple[j][0]);
                }
                else
                {
                    for (int k = 0; k < tuple[j].size(); k++)
                    {
                        for (int l = 0; l < answer.size(); l++)
                        {
                            if (tuple[j][k] == answer[l])
                            {
                                tuple[j][k] = -1;
                            }
                        }
                    }
                    for (int k = 0; k < tuple[j].size(); k++)
                    {
                        if (tuple[j][k] != -1)
                        {
                            answer.push_back(tuple[j][k]);
                        }
                    }
                }
            }
        }
    }
    return answer;
}
