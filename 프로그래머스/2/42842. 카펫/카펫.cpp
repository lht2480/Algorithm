#include <string>
#include <vector>

using namespace std;

//w*h = brown + yellow
//2w + 2h - 4 = 테두리 칸 개수
//brown = 2w + 2h - 4

vector<int> solution(int brown, int yellow) {
    int total = brown + yellow;
    
    for(int h = 3; h < total; h++)
    {
        if(total % h == 0)
        {
            int w = total / h;
            if(w < h) continue;
            
            int temp = 2 * w + 2 * h - 4;
            if(temp == brown)
            {
                return {w, h};
            }
        }
    }
    return {};
}