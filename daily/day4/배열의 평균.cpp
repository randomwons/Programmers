#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers){
    double answer = 0;
    for(auto& v : numbers){
        answer += v;
    }
    return answer / numbers.size();
}