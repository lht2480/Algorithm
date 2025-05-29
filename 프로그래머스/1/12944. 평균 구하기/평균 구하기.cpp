#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) 
{
    double answer = 0;
    double tot = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        tot += arr[i];
    }
    answer = tot / arr.size();
    return answer;
}