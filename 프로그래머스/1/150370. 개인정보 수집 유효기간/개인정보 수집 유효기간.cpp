#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

static int days(string date)
{
    int y = stoi(date.substr(0,4));
    int m = stoi(date.substr(5,2));
    int d = stoi(date.substr(8,2));
    
    return y * 12 * 28 + m * 28 + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) 
{
    unordered_map<char, int> termmonth;
    for(string s : terms)
    {
        char kind = s[0];
        int months = stoi(s.substr(2));
        termmonth[kind] = months;
    }
    
    int todaydays = days(today);
    vector<int> answer;
    
    for(int i = 0; i < privacies.size(); ++i)
    {
        string date = privacies[i].substr(0,10);
        char kind = privacies[i].back();
        
        int collected = days(date);
        int expire = collected + termmonth[kind] * 28 -1;
        
        if(expire < todaydays)
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}