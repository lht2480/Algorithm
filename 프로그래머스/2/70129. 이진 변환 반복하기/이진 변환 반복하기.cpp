#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) //110010101001
{
    int transformcount = 0;  //변환된 횟수
    int deletedzero = 0;  //제거된 0의 개수
    
    while(s != "1")
    {
        int countzero = 0;   //현재 스트링에서의 0의 개수
        string zerodeletednum;   //0제거후 이진수;
        
        for(char c : s)
        {
            if( c == '0') 
            {
                ++countzero;
            }else
            {
                zerodeletednum += c;
            }
        }
        //countzero==6   newnum == 111111
        deletedzero += countzero;
        
        int size = zerodeletednum.length(); //0제거된 이진수 크기
        string nextnum = "";
        while(size > 0)
        {
            nextnum = (size % 2 == 0 ? '0' : '1') + nextnum; 
            size /= 2;
        }
        
        s = nextnum;
        transformcount++;
    }
    
    
    return {transformcount, deletedzero};
}