#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//citations.size()->발표한 논문수
//홀수일땐 x/2 + 1
//짝수일땐 
int solution(vector<int> citations) 
{
    sort(citations.begin(), citations.end());
    
    for(int i = 0; i < citations.size(); ++i)
    {
        int h = citations.size() - i;
        if(citations[i] >= h)
        {
            return h;
        }
    }
    return 0;
}