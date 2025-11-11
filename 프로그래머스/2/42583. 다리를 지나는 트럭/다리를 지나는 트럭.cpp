#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) 
{
    queue<int> bridge;
    int time = 0, cur = 0;
    
    for(int truck : truck_weights)
    {
        while(true)
        {
            if(bridge.empty())
            {
                bridge.push(truck);
                cur += truck;
                time++;
                break;
            }
            
            if(bridge.size() == bridge_length)
            {
                cur -= bridge.front();
                bridge.pop();
            }
            else if (cur + truck <= weight)
            {
                bridge.push(truck);
                cur += truck;
                time++;
                break;
            }
            else
            {
                bridge.push(0);
                time++;
            }
        }
    }
    
    return time + bridge_length;
}