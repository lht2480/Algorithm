#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    
    while(s.length() > 0)
    {
        ++answer;

        int same = 1;
        int nsame = 0;
        for(int i = 1; i < s.length(); ++i)
        {
            if(s[0] == s[i])
            {
                ++same;
            }else
            {
                ++nsame;
            }
            
            if(same == nsame)
            {
                break;
            }
        }
        s = s.substr(same+nsame);
    }
    return answer;
}