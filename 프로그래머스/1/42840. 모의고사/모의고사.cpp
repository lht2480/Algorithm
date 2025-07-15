#include <string>
#include <vector>
#include <algorithm>
#include <initializer_list>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> stu1 = {1,2,3,4,5};
    vector<int> stu2 = {2,1,2,3,2,4,2,5};
    vector<int> stu3 = {3,3,1,1,2,2,4,4,5,5};
    vector<int> answer;
    vector<int> score = {0,0,0};
        
    for(int i = 0; i < answers.size(); i++)
    {
        if(stu1[i % stu1.size()] == answers[i])
        {
            score[0]++;
        }
        if(stu2[i % stu2.size()] == answers[i])
        {
            score[1]++;
        }
        if(stu3[i % stu3.size()] == answers[i])
        {
            score[2]++;
        }
    }
    int maxscore = max({score[0], score[1], score[2]});
    
    if(score[0] == maxscore)
    {
         answer.push_back(1);
    }
    if(score[1] == maxscore)
    {
         answer.push_back(2);
    }
    if(score[2] == maxscore)
    {
         answer.push_back(3);
    }
    sort(answer.begin(), answer.end());
    return answer;
}