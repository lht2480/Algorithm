#include <string>
#include <vector>

using namespace std;

int solution(vector<int> topping)
{
    vector<int> left(10001), right(10001);
    int answer = 0, leftkinds = 0, rightkinds = 0;
    
    for(int t : topping)
    {
        if(right[t]++ == 0) 
            ++rightkinds;
    }
    
    for(int t : topping)
    {
        if(--right[t] == 0) 
            --rightkinds;
        
        if(left[t]++ == 0) 
            ++leftkinds;
        
        if(leftkinds == rightkinds) 
            ++answer;
    }
    return answer;
}