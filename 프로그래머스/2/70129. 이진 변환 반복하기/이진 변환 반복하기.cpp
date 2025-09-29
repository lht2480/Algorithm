#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) 
{
    int zerocount = 0; //제거된 0의 갯수
    int deletezero = 0; //변환된 횟수
    
    while (s != "1")
    {
        int zeronum = 0; //현재 스트링에서 0갯수
        string deletenum = ""; // 0제거후 이진수
        
        for(char c: s)
        {
            if(c == '0')
            {
                ++zeronum;
            }else
            {
                deletenum += c;
            }
        }
        
        zerocount += zeronum;
        
        int size = deletenum.length();
        string nextnum = "";
        
        while(size > 0)
        {
            nextnum = (size % 2 == 0 ? '0' : '1') + nextnum;
            size /= 2;
        }
        
        s = nextnum;
        deletezero ++;
    }
    
    return {deletezero, zerocount};
    
}