#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n)
{
    int answer = 0;
    for(n ;n > 0 ; n--)
    {
        if(n % 2 == 0)
            answer += n;
    }
        return answer;
}