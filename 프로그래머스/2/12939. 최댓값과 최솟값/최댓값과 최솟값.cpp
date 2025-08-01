#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) 
{
    string answer = "";
    istringstream iss(s);
    vector<int> numbers;
    int num;
    
    while(iss >> num)
    {
        numbers.push_back(num);
    }
    
    auto min = min_element(numbers.begin(), numbers.end());
    auto max = max_element(numbers.begin(), numbers.end());
    
    return to_string(*min) + " " + to_string(*max);
}