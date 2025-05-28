#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) 
{

    int sum = 0;
    for (size_t i = 0; i < numbers.size(); i++) 
       
    {
        sum += numbers[i];
    }
    double answer = (double)sum / numbers.size();
    return answer;
}