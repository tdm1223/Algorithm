#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int start = a; start<=b; start++){
        answer += start;
    }
    return answer;
}