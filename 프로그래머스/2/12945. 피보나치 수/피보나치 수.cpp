#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 1;
    int b = 0;
    for(int i = 2; i <= n; ++i)
    {
        int temp = (b + answer) % 1234567;
        b = answer;
        answer = temp;
    }
    return answer;
}