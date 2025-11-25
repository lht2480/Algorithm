#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(long long x)
{
    if(x < 2)
    {
        return false;
    }
    
    for(long long i = 2; i * i <= x; ++i)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}

string toBase(long long n, int k)
{
    string res;
    while(n > 0)
    {
        res = to_string(n % k) + res;
        n /= k;
    }
    return res;
}

int solution(int n, int k) 
{
    string base = toBase(n, k);
    int answer = 0;
    
    string cur;
    for(char c : base)
    {
        if(c == '0')
        {
            if(!cur.empty() && isPrime(stoll(cur))) ++answer;
            cur.clear();
        }else
        {
            cur += c;
        }
    }
    
    if(!cur.empty() && isPrime(stoll(cur))) ++answer;
    
    return answer;
    
}