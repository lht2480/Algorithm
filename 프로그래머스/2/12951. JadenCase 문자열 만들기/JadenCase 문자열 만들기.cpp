#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0; i < s.length(); ++i)
    {
        if(i == 0|| s[i - 1] == ' ')
        {
           if(s[i] <= 'z' && s[i] >= 'a')
           {
               answer += s[i] - 32;
           }else
           {
               answer += s[i];
           }
        }else
        {
            if(s[i] <= 'Z' && s[i] >= 'A')
            {
               answer += s[i] + 32;
            }else
            {
                answer += s[i];
            }
        }
    }
    return answer;
}