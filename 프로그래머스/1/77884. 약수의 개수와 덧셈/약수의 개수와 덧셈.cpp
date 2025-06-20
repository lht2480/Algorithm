#include <string>
#include <vector>

using namespace std;

int countfunc(int num)
{
    int count = 0;
    for(int i = 0; i * i <= num; i++)
    {
        if(i*i==num)
        {
            count += 1;
        }else if(num%2==0)
        {
            count += 2;
        }
    }
    return count;
}
int solution(int left, int right) 
{
    int answer = 0;
    for(int i = left; i <= right; i++)
    {
        int number = countfunc(i);
        if(number % 2 == 0)
        {
            answer += i;
        }else
        {
            answer -= i;
        }
    }
    return answer;
}