#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) 
{
    int x = 0; 
    long long answer = 0;
    for (x = 1 ; x < n ; x++)
    {
        long long x = (long long)sqrt(n);
        if(x*x==n)
        {
            return (x+1)*(x+1);
        }else 
        {
            
            return -1;
        }
    }
}