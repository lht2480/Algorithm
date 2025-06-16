#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    if (arr.size() == 1) 
    {
        return {-1};
    }

    int minVal = *min_element(arr.begin(), arr.end());

    for (auto it = arr.begin(); it != arr.end(); ++it) 
    {
        if (*it == minVal) 
        {
            arr.erase(it);
            break;
        }
    }
    return arr;
}