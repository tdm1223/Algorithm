//최대공약수와 최소공배수
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int gc = gcd(n,m);
    int lc = gc * (n/gc) * (m/gc);
    answer.push_back(gc);
    answer.push_back(lc);
    return answer;
}