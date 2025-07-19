#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int min = 0;
    int temp;
    for(int i : lottos)
    {
        if(find(win_nums.begin(), win_nums.end(), i) != win_nums.end())
        {
            ++min;//맞춘 개수
        }
    }
    temp = count(lottos.begin(), lottos.end(),0); 
    answer.push_back(min + temp == 0 ? 6 : 7 - (min + temp));

    answer.push_back(min == 0 ? 6 : 7 - min);
    return answer;
}