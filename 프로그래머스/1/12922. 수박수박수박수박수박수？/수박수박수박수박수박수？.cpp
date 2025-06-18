#include <string>
#include <vector>

using namespace std;

string solution(int n) 
{
    string answer = "";
    vector<string> s = {"수","박"};
    for(int i = 0 ; i < n ; i++)
    {
        answer += s[i % s.size()];
    }
    return answer;
}