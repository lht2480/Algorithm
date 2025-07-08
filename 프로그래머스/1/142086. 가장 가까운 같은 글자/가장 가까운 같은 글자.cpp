#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) 
{
    vector<int> answer;
    unordered_map<char, int> index;
    
    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if(index.find(c)!=index.end())
        {
            answer.push_back(i-index[c]);
        }else
        {
            answer.push_back(-1);
        }
        index[c] = i;
    }
    return answer;
}