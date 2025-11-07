#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) 
{
    vector<string> s;
    for(int x : numbers)
    {
        s.push_back(to_string(x));
    }
    
    sort(s.begin(), s.end(), [](string& a, string& b)
         {
             return a + b > b + a;
         });
    
    if(s[0] == "0") return "0";
    
    string answer = "";
    for(string t : s)
    {
        answer += t;
    }
    return answer;
}