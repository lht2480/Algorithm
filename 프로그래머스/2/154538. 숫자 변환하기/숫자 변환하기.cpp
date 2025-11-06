#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int x, int y, int n) 
{
    if(x > y) return -1;
    
    vector<int> dist(y + 1, -1);
    queue<int> q;
    q.push(x);
    dist[x] = 0;
    
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        if(cur == y) 
            return dist[cur];
        
        for(int i : {cur + n, cur * 2, cur * 3})
        {
            if(i <= y && dist[i] == -1)
            {
                dist[i] = dist[cur] + 1;
                q.push(i);
            }
        }
    }
    return -1;
}