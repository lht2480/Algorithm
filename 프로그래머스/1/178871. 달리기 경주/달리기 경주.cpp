#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) 
{
    unordered_map<string, int> index; //mumu, seo, peu          seo
    
    for(int i = 0; i < players.size(); ++i)
    {
        index[players[i]] = i;
    }
    
    for(string s : callings)
    {
        int temp = index[s];
        swap(players[temp], players[temp - 1]);
        
        index[players[temp]] = temp;
        index[players[temp-1]] = temp-1;
    }  
    return players;
}