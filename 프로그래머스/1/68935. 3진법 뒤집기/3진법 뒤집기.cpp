#include <string>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    stack<int> temp;
    while(n>0)
    {
        temp.push(n % 3);
        n = n / 3;//n=45
    }
    //(0021)
    int num = 0;
    while(!temp.empty())
    {
        answer += temp.top() * pow(3,num);
        temp.pop();
        num++;
    }
    return answer;
}