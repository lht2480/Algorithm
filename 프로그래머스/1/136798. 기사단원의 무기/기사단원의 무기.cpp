#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    vector<int> nums;
    int answer = 0;
    int temp = 0;
    for(int i = 1; i <= number; i++)
    {
        temp = 0;
        for(int j = 1; j * j <= i; j++)
        {
            if (i % j == 0) 
            {
                if (j * j == i) 
                {
                    temp += 1;
                } else 
                {
                temp += 2;
                }
            }
        }
        if(temp > limit)
        {
            temp = power;
        }
        nums.push_back(temp);
    }
    for(int i = 0; i < nums.size(); ++i)
    {
        answer += nums[i];
    }
    return answer;
}