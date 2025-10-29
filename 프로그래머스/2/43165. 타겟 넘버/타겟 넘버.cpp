#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int target) 
{
    int answer = 0;
    queue<int> q;
    q.push(0);
    
    for(int num : numbers)
    {
        int size = q.size();
        while(size--)
        {
            int cur = q.front();
            q.pop();
            q.push(cur + num);
            q.push(cur - num);
        }
    }
    
    while(!q.empty())
    {
        if(q.front() == target) 
        {
            ++answer;
        }
        q.pop();
    }
    return answer;
}