#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer;
    
    if (common[2] - common[1] == common[1] - common[0]) answer = common.back() + (common[1] - common[0]);
    else answer = common.back() * (common[1] / common[0]);
    return answer;
}

// return (common[2] - common[1] == common[1] - common[0]) ? common.back() + (common[1] - common[0]) : common.back() * (common[1] / common[0]);
