#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int lenp = p.length();
    long long nump = stoll(p);
    for(int i = 0; i <= t.length() - lenp; i++)
    {
        string sub = t.substr(i,lenp);
        long long subNum = stoll(sub);
        if(subNum <= nump)
        {
            answer++;
        }
    }
    return answer;
}