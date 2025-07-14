#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) 
{
    string answer = "";
    int idx1 = 0, idx2 = 0;
    for(string word : goal)
    {
        if(cards1[idx1] == word)
        {
            idx1++;
        }else if(cards2[idx2] == word)
        {
            idx2++;
        }else
        {
            return "No";
        }
    }
    return "Yes";
}