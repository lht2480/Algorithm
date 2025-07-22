#include <string>
#include <vector>

using namespace std;

bool isValid(string word)
{
    vector<string> sound = {"aya", "ye", "woo", "ma"};
    string temp = "";
    
    while(!word.empty())
    {
        bool matched = false;
        for(string s : sound)
        {
            if(word.find(s) == 0)
            {
                if(s == temp) return false;
                temp = s;
                word = word.substr(s.length());
                matched = true;
                break;
            }
        }
        if(!matched) return false;
    }
    return true;
}

int solution(vector<string> babbling) 
{
    int answer = 0;
    
    for (string word : babbling) 
    {
        if (isValid(word)) answer++;
    }
    return answer;
}