#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int fun_g(int a, int b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int fun_l(int a, int b)
{
    return a / fun_g(a, b) * b;
}   
    
int solution(vector<int> arr) 
{
    int answer = arr[0];
    
    for(int i = 1; i < arr.size(); ++i)
    {
        answer = fun_l(answer, arr[i]);
    }
    return answer;
}