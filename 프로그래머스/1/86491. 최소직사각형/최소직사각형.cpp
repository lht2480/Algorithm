#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int solution(vector<vector<int>> sizes) 
{
    int answer = 0;
    int maxWidth = 0;
    int maxHeight = 0;
    for(int i = 0; i < sizes.size(); i++)
    {
        vector<int>card = sizes[i];
        int w = card[0];
        int h = card[1];
        
        int width = max(w,h);
        int height = min(w,h);
        
        maxWidth = max(maxWidth,width);
        maxHeight = max(maxHeight,height);
    }
    return answer = maxWidth * maxHeight;
}