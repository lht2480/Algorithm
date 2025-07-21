#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) 
{
    string answer = "";
    
    vector<int> countX(10, 0);
    vector<int> countY(10, 0);

    for (char ch : X) countX[ch - '0']++;
    for (char ch : Y) countY[ch - '0']++;

    for (int i = 9; i >= 0; --i)
    {
        int common = min(countX[i], countY[i]);
        answer += string(common, i + '0');
    }

    if (answer.empty()) return "-1";
    if (answer[0] == '0') return "0";
 
    return answer;
}