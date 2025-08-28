#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int i = 0;
    
    for(char c : s)
    {
        if(c == ' ')
        {
            answer += c;
            i = 0;
        }
        else
        {
            if(i % 2 == 0)
            {
                if(c >= 'a' && c <= 'z')
                {
                    answer += c - 32;
                }
                else
                {
                    answer += c;
                }
            }else
            {
                if(c >= 'A' && c <= 'Z')
                {
                    answer += c + 32;
                }
                else
                {
                    answer += c;
                }
            }
            ++i;
        }
    }
    return answer;
}