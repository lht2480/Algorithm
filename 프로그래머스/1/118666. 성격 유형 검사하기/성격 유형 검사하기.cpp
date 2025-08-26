#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) 
{
    string answer = "";
    unordered_map<char, int> score;
    
    vector<int> points = {0, 3, 2, 1, 0, 1, 2, 3};
    
    for(int i = 0; i < survey.size(); i++)
    {
        char first = survey[i][0];
        char second = survey[i][1];
        int choice = choices[i];
        
        if(choice < 4)
        {
            score[first] += points[choice];
        }
        else if(choice > 4)
        {
            score[second] += points[choice];
        }
    }
    
    answer += (score['R'] >= score['T']) ? 'R' : 'T';
    answer += (score['C'] >= score['F']) ? 'C' : 'F';
    answer += (score['J'] >= score['M']) ? 'J' : 'M';
    answer += (score['A'] >= score['N']) ? 'A' : 'N';
    return answer;
}