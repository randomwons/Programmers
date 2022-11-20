#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> array){
    int answer = 0;
    int max = 0;
    
    map<int, int> counts;
    for(auto& v : array){
        counts[v]++;
    }

    for(auto& v : counts){
        if(max < v.second){
            max = v.second;
            answer = v.first;
        } else if (max == v.second){
            answer = -1;
        }
    }
    
    return answer;
}