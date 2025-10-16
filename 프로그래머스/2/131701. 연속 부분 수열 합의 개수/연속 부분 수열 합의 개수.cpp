#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> elements) 
{
    int n = elements.size();
    
    unordered_set<long long> sums;
    
    sums.reserve(n * n);

    for (size_t len = 1; len <= n; ++len) 
    {
        long long sum = 0;
        for (size_t k = 0; k < len; ++k) 
        {
            sum += elements[k];
        }
        sums.insert(sum);

        for (size_t i = 1; i < n; ++i) 
        {
            sum += elements[(i + len - 1) % n];
            sum -= elements[i - 1];            
            sums.insert(sum);
        }
    }
    return sums.size();
}