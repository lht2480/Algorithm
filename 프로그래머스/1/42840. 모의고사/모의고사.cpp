#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) 
{
    vector<int> answer;
    vector<int> stu1 = {1, 2, 3, 4, 5};
    vector<int> stu2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> stu3 = {3, 3, 1, 1 ,2, 2, 4, 4, 5, 5};
    vector<int> score(3);
    
    for(int i = 0; i < answers.size(); ++i)
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
    
    int maxindex = max({score[0], score[1], score[2]});
    for(int i = 0; i < score.size(); ++i)
    {
        if(maxindex == score[i])
        {
            answer.push_back(i+1);
        }
    }
    return answer;
}