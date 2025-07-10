#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> pq; // 최소 힙

    for (int i = 0; i < score.size(); ++i) {
        if (pq.size() < k) {
            pq.push(score[i]); // 명예의 전당 자리가 남았으면 그냥 추가
        } else if (score[i] > pq.top()) {
            pq.pop();          // 가장 낮은 점수 제거
            pq.push(score[i]); // 새로운 점수 추가
        }
        answer.push_back(pq.top()); // 명예의 전당 중 최하 점수 출력
    }

    return answer;
}