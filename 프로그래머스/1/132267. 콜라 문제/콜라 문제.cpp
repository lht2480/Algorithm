#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) 
{
    int answer = 0;
    int exc = 0;
    while(n >= a)
    {
        exc = (n / a) * b;
        answer += exc;
        n = exc + (n % a); 
    }
    return answer;
}