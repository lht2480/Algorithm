#include <string>
#include <vector>
#include <stack>

using namespace std;

bool check(string s, int k)
{
    int n = s.size();
    stack<char> st;
    
    for(int i = 0; i < n; ++i)
    {
        char c = s[(k + i) % n];
        switch (c)
        {
            case '(' : case '[' : case '{' : 
                st.push(c);
                break;
               
            case ')' :
                if(st.empty() || st.top() != '(') return false;
                st.pop();
                break;
                
            case '}' :
                if(st.empty() || st.top() != '{') return false;
                st.pop();
                break;
                
            case ']':
                if(st.empty() || st.top() != '[') return false;
                st.pop();
                break;
        }
    }
    
    return st.empty();
}

int solution(string s) 
{
    int answer = 0;
    int n = s.size();
    
    for(int i = 0; i < n; ++i)
    {
        if(check(s, i))
        {
            ++answer;
        }
    }
    return answer;
}