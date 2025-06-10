#include <string>
#include <vector>
//배열안에 동일한 문자열을 찾아서 반환하는 함수
using namespace std;

string solution(vector<string> seoul) 
{
    string answer = "";
    int num = 0;
    for(int i = 0; i < seoul.size() ; i++)
    {
        if(seoul[i]=="Kim")
        {
            num = i;
        }
    }
    answer += "김서방은 ";
    answer += to_string(num);
    answer += "에 있다";
    return answer;
}