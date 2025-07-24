#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char, int> press;
    
    for(string s : keymap)
    {
        for(int i = 0; i < s.size(); ++i)
        {
            char c = s[i];
            if(press.find(c) == press.end()||press[c] > i + 1)
            {
                press[c] = i + 1;
            }
        }
    }
    
    for(string tar : targets)
    {
        int total = 0;
        bool possible = true;
        for(char c : tar)
        {
            if(press.find(c) == press.end())
            {
                possible = false;
                break;
            }
            total += press[c];
        }
        answer.push_back(possible ? total : -1);
    }
    return answer;
}