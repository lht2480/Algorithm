#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) 
{
    vector<long long> answer;
    for(int i = x;answer.size()<=(n-1);i+x)
    {
        answer.push_back(i);
        i=i+x;
    }
    return answer;
}