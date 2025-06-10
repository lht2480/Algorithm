#include <string>
#include <vector>

using namespace std;
//주어진 수 : num
//반복된 횟수 : answer
int solution(int num)
{
    int answer = 0;
    long long n = num;
    if (n == 1)
    {
         answer = 0;
    }else
    {
        while (n != 1)
        {
            if (answer == 500)
            {
                answer = -1;
                break;
            }

            if (n % 2 == 0)
            {
                n /= 2;
            }else
            {
                n = n * 3 + 1;
            }
            answer++;
        }
    }
    return answer;
}