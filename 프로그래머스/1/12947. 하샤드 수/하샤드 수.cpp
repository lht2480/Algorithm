#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    int a = x;
    int sum = 0;
    bool answer = true;
    while (x > 0) 
    {
        sum += x%10;
        x/=10;
    }
    return (a % sum == 0);
}