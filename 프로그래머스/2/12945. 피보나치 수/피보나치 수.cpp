#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int firstnum = 0;
    int secondnum = 1;
    for(int i = 2; i <= n; ++i)
    {
        int temp = (firstnum + secondnum) % 1234567;
        firstnum = secondnum;
        secondnum = temp;
    }
    return secondnum;
}