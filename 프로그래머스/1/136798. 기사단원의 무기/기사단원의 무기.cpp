#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) 
{
    int answer = 0;
    int temp;
    
    for(int i = 1; i <= number; ++i)
    {
        temp = 0;
        for(int j = 1; j * j <= i; ++j)
        {
            if(j * j == i)
            {
                temp += 1;
            }
            else if(i % j == 0)
            {
                temp += 2;
            }
        }
        
        if(temp > limit)
        {
            temp = power;
        }
        answer += temp;
    }
    
    return answer;
}