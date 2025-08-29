#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) 
{
    vector<int> answer;
    int score = 0;
    for(int i : lottos)
    {
        if(find(win_nums.begin(), win_nums.end(), i) != win_nums.end())
        {
            ++score;
        }
    }
    
    int temp = count(lottos.begin(), lottos.end(), 0);
    
    answer.push_back((score + temp) == 0 ? 6 : 7 - (score + temp));
    answer.push_back(score == 0 ? 6 : 7 - score);
    return answer;
}