#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int n : numbers){
        answer.emplace_back(n*2);
    }
    return answer;
}