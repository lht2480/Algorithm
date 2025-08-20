#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) 
{
    int answer = 0;
    int covered = 0;
    
    for(int i : section)
    {
        if(i > covered)
        {
            ++answer;
            covered = i + m - 1;
        }
    }
    return answer;
}