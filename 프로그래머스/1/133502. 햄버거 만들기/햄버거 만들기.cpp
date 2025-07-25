#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) 
{
    int answer = 0;
    vector<int> stack;
    for(int i : ingredient)
    {
        stack.push_back(i);
    
        if(stack.size() >= 4)
        {
            int n = stack.size();
        
            if(stack[n-4] == 1 && stack[n-3] == 2 && stack[n-2] == 3 && stack[n-1] == 1)
            {
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                        
                ++answer; 
            }
        }
    }
    return answer;
}
