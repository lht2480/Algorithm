#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> day = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> lastday = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    for(int i = 0 ; i < a - 1; i++)
    {
        sum += lastday[i];
    }
    sum += b;
    answer = day[(sum - 1) % 7];
    return answer;
}