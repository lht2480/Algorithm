#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) 
{
    string answer = "";
    unordered_set<char> skipset(skip.begin(), skip.end());
    
    for(char ch : s)
    {
        int count = 0;
        char chr = ch; 
        
        while(count < index)
        {
            ++chr;
            if(chr > 'z') chr = 'a';
            if(skipset.find(chr) != skipset.end()) continue;
            ++count;
        }
        answer += chr;
    }
    return answer;
}