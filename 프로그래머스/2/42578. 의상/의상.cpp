#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    int answer = 1;
    unordered_map<string, int> categorycount;
    
    for(auto& item: clothes)
    {
        ++categorycount[item[1]];
    }
    
    for(auto& [type, cnt] : categorycount)
    {
        answer *= (cnt + 1);
    }
    return answer - 1;
}