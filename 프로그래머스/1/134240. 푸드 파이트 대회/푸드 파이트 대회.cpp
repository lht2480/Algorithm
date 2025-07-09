#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) 
{
    string answer = "";
    string half = "";
    int size = food.size();
    for(int i = 1; i < size; i++)
    {
        for(int j = 0; j < food[i] / 2; j++)
        {
            half += to_string(i);
        }
    }
    answer += half + "0";
    reverse(half.begin(), half.end());
    answer += half;
    return answer;
}