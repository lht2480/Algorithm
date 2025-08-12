#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) 
{
    int answer = 0;
    int size = score.size();
    sort(score.begin(), score.end(), greater<int>());
    
    for(int i = 0; i <= size - m; i += m)
    {
        int minscore = score[i + m - 1];
        answer += minscore * m;
    }
    return answer;
}