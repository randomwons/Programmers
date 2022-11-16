#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    int a = (total - (num * num - num) / 2) / num;
  
    vector<int> answer;
    for(int i = 0; i < num; i++){
        answer.push_back(a+i);
    }
    return answer;
}
