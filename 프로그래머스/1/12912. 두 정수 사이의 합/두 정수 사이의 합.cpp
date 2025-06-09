#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) 
{
    int start = min(a,b);
    int end = max(a,b);
    long long answer = 0;
    if(start==end)
    {
        return start;
    }
    for(start ; start <= end ; start++)
    {
        answer += start;
    }
    return answer;
}