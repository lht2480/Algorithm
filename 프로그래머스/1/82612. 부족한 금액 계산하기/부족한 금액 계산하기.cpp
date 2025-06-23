using namespace std;

long long calculate(int c)
{
    int tot = 0;
    for(int i = 1 ; i <= c ; i++)
    {
        tot += i;
    }
    return tot;
}
long long solution(int price, int money, int count)
{
    long long answer = 0;
    answer = calculate(count) * price - money;
    if(answer > 0)
    {
        return answer;
    }else
    {
        return 0;
    }
    
}