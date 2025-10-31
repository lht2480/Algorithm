#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) 
{
    unordered_map<string, int> need;
    for(int i = 0; i < want.size(); ++i)
    {
        need[want[i]] = number[i];
    }
    
    int n = discount.size();
    int answer = 0;
    
    for(int i = 0; i + 9 < n; ++i)
    {
        unordered_map<string, int> window;
        for(int j = i; j < i + 10; ++j)
        {
            ++window[discount[j]];
        }
        
        bool ok = true;
        for(auto& [item, cnt] : need)
        {
            if(window[item] != cnt)
            {
                ok = false;
                break;
            }
        }
        
        if(ok)
        {
            ++answer;
        }
    }
    return answer;
}