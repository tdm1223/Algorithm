// 17478. 재귀함수가 뭔가요?
// 2021.07.19
// 재귀
#include<iostream>
#include<string>

int n;

using namespace std;

void print(string s, int cnt)
{
    for (int j = 0; j < cnt; ++j)
    {
        std::cout << "____";
    }
    std::cout << s;
}

void go(int cnt)
{
    print("\"재귀함수가 뭔가요?\"\n", cnt);
    // 종료 조건
    if (cnt == n)
    {
        print("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n", cnt);
    }
    else
    {
        print("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n", cnt);
        print("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n", cnt);
        print("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n", cnt);
        go(cnt + 1);
    }
    print("라고 답변하였지.\n", cnt);
}

int main()
{
    std::cin >> n;
    std::cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    go(0);
    return 0;
}
