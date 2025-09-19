#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
const int H = (int)park.size();
    const int W = (int)park[0].size();

    int r = 0, c = 0;         
    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
            if (park[i][j] == 'S') { r = i; c = j; }

    for (const string& cmd : routes) {
        char dir = cmd[0];         
        int n   = cmd[2] - '0';      

        int dr = 0, dc = 0;
        switch (dir) {           
            case 'N': dr = -1; dc =  0; break;
            case 'S': dr =  1; dc =  0; break;
            case 'W': dr =  0; dc = -1; break;
            case 'E': dr =  0; dc =  1; break;
        }

        int nr = r, nc = c;
        bool ok = true;
        for (int k = 0; k < n; ++k) 
        {
            nr += dr; nc += dc;
            if (nr < 0 || nr >= H || nc < 0 || nc >= W || park[nr][nc] == 'X') 
            {
                ok = false; break;
            }
        }
        if (ok) { r = nr; c = nc; } 
    }
    return {r, c};
}