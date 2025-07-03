#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string s) 
{
    map<string, char> map = {{"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'},  
                             {"five", '5'}, {"six", '6'}, {"seven", '7'},{"eight", '8'}, {"nine", '9'}};
    int answer = 0;
    string numbers = "";
    string temp = "";
    for(char c : s)
    {
        if(c >= '0' && c <= '9')
        {
            numbers += c;
        }else
        {
            temp += c;
            if(map.find(temp) != map.end())
            {
                numbers += map[temp];
                temp = "";
            }
        }
    }
    for(char c : numbers)
    {
        answer = answer * 10 + (c - '0');
    }
    return answer;
}