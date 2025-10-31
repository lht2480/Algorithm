#include <string>
#include <vector>

using namespace std;
vector<string> dict;
vector<char> arr = {'A','E','I','O','U'};

void dfs(string current)
{
    if(current.size() > 5) return;
    if(!current.empty()) dict.push_back(current);
    
    for(char c : arr)
    {
        dfs(current + c);
    }
}

int solution(string word) 
{
    dfs("");
    
    for(int i = 0; i < dict.size(); ++i)
    {
        if(dict[i] == word) return i + 1;
    }
    return -1;
}