#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) 
{
    vector<int> answer;
    int temp;
    for(int i = min(n,m); i > 0; i--)
    {
        if(n % i == 0 && m % i == 0)
        {
            temp = i;
            answer.push_back(i);
            break;
        }
    }
    answer.push_back(n * m / temp);
    return answer;
}