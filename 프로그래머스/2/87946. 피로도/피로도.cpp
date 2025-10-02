#include <string>
#include <vector>
#include <algorithm>

using namespace std;

namespace
{
    int best;
    
    void dfs(int cur, vector<vector<int>>& dungeons, vector<char>& used, int taken) 
    {
        best = max(best, taken);
        
        int n = dungeons.size();
        for(int i = 0; i < n; ++i)
        {
            if(used[i]) continue;
            int need = dungeons[i][0];
            int cost = dungeons[i][1];
            if(cur >= need)
            {
                used[i] = 1;
                dfs(cur - cost, dungeons, used, taken + 1);
                used[i] = 0;
            }
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    vector<char> used(dungeons.size(), 0);
    dfs(k, dungeons, used, 0);
    return best;
}