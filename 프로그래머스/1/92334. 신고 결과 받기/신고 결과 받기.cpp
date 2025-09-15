#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) 
{
    vector<int> answer(id_list.size(), 0);
    unordered_map<string, int> count;
    int n = id_list.size();

    for(int i = 0; i < n; ++i)
    {
        count[id_list[i]] = i;
    }
    
    unordered_set<string> seen;
    vector<vector<int>> reporter(n);
    
    for(string s : report)
    {
        if(seen.insert(s).second == false) continue;
        
        int c = s.find(' ');
        string a = s.substr(0, c);
        string b = s.substr(c + 1);
        
        reporter[count[b]].push_back(count[a]);
    }
    
    for(int i = 0; i < n; ++i)
    {
        if(reporter[i].size() >= k)
        {
            for(int j : reporter[i])
            {
                ++answer[j];
            }
        }
    }
    return answer;
}