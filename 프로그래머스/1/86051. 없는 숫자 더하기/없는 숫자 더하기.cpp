#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int i = 0; i <= 9; i++)
    {
        if(find(numbers.begin(), numbers.end(), i) == numbers.end())
        {
            answer += i;
            cout << "합: " << answer << std::endl;
        }
    }
    return answer;
}