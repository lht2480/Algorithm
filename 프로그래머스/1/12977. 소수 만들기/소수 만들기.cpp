#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

bool func(int a)
{
    for(int i = 2; i <= sqrt(a); ++i)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) 
{
    int answer = 0;
    int n = nums.size();
    int sum = 0;
    for(int i = 0; i < n - 2; ++i)
    {
        for(int j = i + 1; j < n - 1; ++j)
        {
            for(int k = j + 1; k < n; ++k)
            {
                sum = nums[i] + nums[j] + nums[k];
                if(func(sum))
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}