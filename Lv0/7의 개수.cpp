#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array){
    int answer = 0;
    for(auto& v : array){
        while(v != 0){
            if (v%10 == 7) answer++;
            v /= 10;
        }
    }
    return answer;
}

