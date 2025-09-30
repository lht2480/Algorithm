#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) 
{
    int answer = 0;
    unordered_map<int, int> count;
    for(int i : tangerine)
    {
        count[i]++;//각 사이즈와 갯수 묶음.
    }
    
    vector<int> freq;
    for(auto& p : count)
    {
        freq.push_back(p.second);//각 사이즈의 갯수
    }
    
    sort(freq.begin(), freq.end(), greater<int>());//갯수가 큰순서대로 내림차순정렬
    
    int taken = 0;
    int kinds = 0;
    
    for(int f : freq) //갯수가 큰 순서대로 넣으면 들어가는 크기종류갯수도 적어짐.
    {
        taken += f;
        kinds += 1;
        if(taken >= k)
        {
            break;
        }
    }
    return kinds;
}