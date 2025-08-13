#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> score(3, 0);
    vector<int> stu1 = {1,2,3,4,5};
    vector<int> stu2 = {2,1,2,3,2,4,2,5};
    vector<int> stu3 = {3,3,1,1,2,2,4,4,5,5};
    
    for(int i = 0; i < answers.size(); ++i)
    {
        if(answers[i] == stu1[i % stu1.size()])
        {
            score[0]++;
        }
        if(answers[i] == stu2[i % stu2.size()])
        {
            score[1]++;
        }
         if(answers[i] == stu3[i % stu3.size()])
        {
            score[2]++;
        }
    }
  
    int maxele = max({score[0], score[1], score[2]});
    
    for(int i = 0; i < score.size(); ++i)
    {
        if(maxele == score[i])
        {
            answer.push_back(i+1);
        }
    }
    return answer;
}