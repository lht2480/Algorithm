#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) 
{
    int answer = 0;
    queue<int> q; 
    for(int i = 0; i < priorities.size(); ++i) 
    {
        q.push(i);
    }
    //{0, 1, 2, 3}
    priority_queue<int> mx;
    for(int p : priorities) 
    {
        mx.push(p);
    }
    //{2, 1, 3, 2} -> {3, 1, 2, 2}
    int print = 0;
    while(!q.empty())
    {
        int idx = q.front();
        
        q.pop();
        //priorities[0]->2 3
        if(priorities[idx] == mx.top())
        {
            mx.pop();
            
            ++print;;
            
            if(idx == location) 
            {
                return print;
            }
        }
        else
        {
            q.push(idx);
        }
    }
    
    return answer;
}