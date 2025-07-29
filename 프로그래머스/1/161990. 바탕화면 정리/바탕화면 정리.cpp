#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int n = wallpaper.size();
    int m = wallpaper[0].size();

    int lux = n, luy = m;
    int rdx = 0, rdy = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (wallpaper[i][j] == '#') {
                lux = min(lux, i);
                luy = min(luy, j);
                rdx = max(rdx, i + 1);
                rdy = max(rdy, j + 1);
            }
        }
    }

    return {lux, luy, rdx, rdy};
}