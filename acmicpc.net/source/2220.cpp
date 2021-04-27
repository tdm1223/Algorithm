// 2220. 힙 정렬
// 2021.04.27
// 그리디 알고리즘
#include<iostream>
#include<algorithm>

using namespace std;

int heap[100001];
int main()
{
    int n;
    cin >> n;

    // 배열을 이용해 최대 힙을 구성하는 과정
    for (int i = 1; i <= n; i++)
    {
        heap[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        // i와 1을 바꾼다.(1이 가장 끝에 오도록 한다)
        swap(heap[i - 1], heap[i]);

        // 최대힙 구성
        // 방금 넣은 수가 가장 위로 올라가도록 swap을 반복한다.
        for (int j = i - 1; j > 1; j /= 2)
        {
            swap(heap[j], heap[j / 2]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << heap[i] << " ";
    }
    return 0;
}
