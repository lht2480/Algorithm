#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//3322111
bool compare(int a,int b)
{
    return a > b;
}
int solution(int k, int m, vector<int> score) 
{
    int answer = 0;
    int size = score.size();
    sort(score.begin(), score.end(), compare);
    
    for(int i = 0; i <= size - m; i += m)
    {
        int minscore = score[i + m - 1];
        answer += m * minscore;
    }
    return answer;
}