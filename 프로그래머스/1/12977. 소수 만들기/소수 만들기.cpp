#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) 
{
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) return false;   
    }
    return true;
}
int solution(vector<int> nums) 
{
    int answer = 0;
    for(int i = 0; i < nums.size() - 2; i++)
    {
        for(int j = i + 1; j < nums.size() - 1; j++)
        {
            for(int k = j + 1; k < nums.size(); k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(isPrime(sum)) answer++;
            }
        }
    }

    return answer;
}