#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;

    for (int s : score) {
        honor.push_back(s);
        sort(honor.begin(), honor.end(), greater<int>());

        if (honor.size() > k) {
            honor.pop_back();
        }

        answer.push_back(honor.back());
    }

    return answer;
}